#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	Linked_List<int>* ll = new Linked_List<int>();
	ll->addToTail(2);
	ll->addToTail(5);
	ll->addToTail(1);
	cout << ll->ToString() << endl;
	ll->RemoveSecondToLast();
	cout << ll->ToString() << endl;
	ll->RemoveSecondToLast();
	cout << ll->ToString() << endl;
	ll->addToTail(10);
	cout << ll->ToString() << endl;
	cout << "Hello World!\n";
}