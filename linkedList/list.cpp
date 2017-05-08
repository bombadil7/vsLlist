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

int insertFirst(node *&head, int num) {
	node *newNode = new (node);
	newNode->num = num;
	// Check if list is emty - then we just create one node 
	// and point head to it
	if (!head) {
		head = newNode;
		head->next = NULL;
		return 1;
	}

	// Otherwise shift everthing and insert 
	newNode->next = head;
	head = newNode;
	return 2;
}

int insertLast(node *&head, int num) {
	node *newNode = new (node);
	newNode->num = num;
	newNode->next = NULL;
	int position = 0;

	// Is list empty?
	if (!head) {
		head = newNode;
		return position;
	}

	// Otherwise trace to the end
	node *currentNode = head, *nextNode = head->next;
	++position;
	while (nextNode != NULL) {
		currentNode = nextNode;
		nextNode = nextNode->next;
		++position;
	}
	currentNode->next = newNode;
	return position;
}