#include "list.h"

int main(void) {
	char inBuffer[50];
	cout << "Creating the list\n";

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