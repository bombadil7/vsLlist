#include "list.h" 

int printLinkedList(node *head) {
	int numNodes = 0;
	node *currentNode = head;

	while (currentNode) {
		cout << currentNode->num << " ";
		currentNode = currentNode->next;
		++numNodes;
	}
	cout << endl;
	return numNodes;
}

int createLinkedList(node *&head, int numNodes) {
	int numNodesCreated = 0;
	if (numNodes < 1)
		return 0;

	// Create the first node and point head to it
	node *newNode = new (node);
	newNode->num = 1;
	newNode->next = NULL;
	head = newNode;

	// Create all the other nodes and link them
	node *currentNode = NULL;
	while (++numNodesCreated < numNodes) {
		currentNode = newNode;
		newNode = new (node);
		newNode->num = pow(10, numNodesCreated);
		newNode->next = NULL;
		currentNode->next = newNode;
	}
	return numNodesCreated;
}


int deleteLinkedList(node *&head) {
	int numNodesDeleted = 0;
	node *nextNode = NULL;

	while (head) {
		nextNode = head->next;
		free(head); 
		head = nextNode;
		++numNodesDeleted;
	}
	return numNodesDeleted;
}
