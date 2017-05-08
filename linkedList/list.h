#pragma once
#include <iostream>
using namespace std;

struct node {
	int num;
	node *next;
};

// Returns number of nodes printed
int printLinkedList(node *head);

// Returns number of nodes created
int createLinkedList(node *&head, int numNodes);

// Returns number of nodes deleted 
int deleteLinkedList(node *&head);