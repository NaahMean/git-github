// operation on a linked list
// append

#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	// Define a NumberList object.
	NumberList list;

	// Append some values to the list.
	list.appendNode(2.5);
	list.appendNode(7.9);
	list.appendNode(12.6);
	
	// Insert a node in the middle of the list
	list.insertNode(10.5);

	// Displays the values in the list
	list.displayList();

	// Delete a node
	cout << "Now deleting the last node.\n";
	list.deleteNode(12.6);

	// Display the new list
	cout << "Here are the nodes left.\n";
	list.displayList();
	cout << endl;
	cin.get();
	return 0;
}