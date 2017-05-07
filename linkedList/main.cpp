#include <iostream>
using namespace std;

struct node {
	int num;
	node *next;
};


int main(void) {
	char inBuffer[50];
	cout << "Creating the list\n";

	/*
	node first, second;
	first.num = 3;
	first.next = &second;
	second.num = 4;
	second.next = NULL;

	cout << "First num is " << first.num
		<< "\nSecond num is " << (*first.next).num
		<< "\n";
	*/

	// Create the list -----------------------
	node *head = NULL, *next = NULL;
	node *current = new (node);
	current->num = 1;
	current->next = NULL;
	head = current;

	for (int i = 1; i < 5; ++i) {
		// Create new node
		node *next = new (node);
		next->next = NULL;
		next->num = pow(10, i);
//		next->num = i + 1;

		// Attach new node to the list
		current->next = next;
		current = next;
	}

	// Print the list ------------------------
	current = head;
	do {
		cout << current->num << endl;
		current = current->next;
	} while (current != NULL);

	// Delete the list -----------------------
	current = head;
	while (current != NULL) {
		next = current->next;
		free(current);
		head = next;
		current = next;
	}

	if (!head)
		cout << "The entire list has been removed\n";
	else
		cout << "Could not remove the list\n";

	cin.get(inBuffer, 5);
	return 0;
}