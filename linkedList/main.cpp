#include <iostream>
using namespace std;

struct node {
	int num;
	node *next;
};


int main(void) {
	char inBuffer[50];
	cout << "Creating the list\n";

	node first, second;
	first.num = 3;
	first.next = &second;
	second.num = 4;
	second.next = NULL;

	cout << "First num is " << first.num
		<< "\nSecond num is " << (*first.next).num
		<< "\n";

	cin.get(inBuffer, 50);
	return 0;
}