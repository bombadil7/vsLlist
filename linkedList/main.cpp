#include "list.h"

int main(void) {
	char inBuffer[50];
	cout << "Creating the list\n";
	node *head = NULL;
/*
	// Create the list -----------------------
	node *head = NULL, *next = NULL, *current = NULL;

	if (int num = createLinkedList(head, 7)) {
		cout << "Created " << num << " nodes\n";
		if (!head) cout << "But head is NULL\n";
	}
	else
		cout << "Failed to create a linked list."
		<< "\nCheck if the number of nodes requested is valid (> 0)\n";

	// Print the list ------------------------
	if (int num = printLinkedList(head))
		cout << "Printed " << num << " nodes\n";
	else
		cout << "Error: The linked list cannot be empty\n";
*/

	int p;
	p = insertLast(head, 3);
	cout << "Inserted at position " << p << endl;
	p = insertLast(head, 4);
	cout << "Inserted at position " << p << endl;
	p = insertLast(head, 5);
	cout << "Inserted at position " << p << endl;
	p = insertLast(head, 6);
	cout << "Inserted at position " << p << endl;
	p = insertLast(head, 7);
	cout << "Inserted at position " << p << endl;
	printLinkedList(head);

	// Delete the list -----------------------
	if (int num = deleteLinkedList(head)) {
		cout << "Removed " << num << " nodes\n";
		if (head) cout << "head is not empty\n";
	}
	else
		cout << "Could not delete linked list\n";
	cin.get(inBuffer, 5);
	return 0;
}