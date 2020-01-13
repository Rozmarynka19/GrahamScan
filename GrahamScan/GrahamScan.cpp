#include <iostream>
#include "LinkedList.h"
#include "Point.h"
using namespace std;

int main()
{
	Linked_List<Point>* ll = new Linked_List<Point>();
	ll->addToTail(*(new Point(5,3)));
	ll->addToTail(*(new Point(6,2)));
	ll->addToTail(*(new Point(10,20)));
	cout << ll->ToString() << endl;
	ll->RemoveSecondToLast();
	cout << ll->ToString() << endl;
	ll->RemoveSecondToLast();
	cout << ll->ToString() << endl;
	cout << "Hello World!\n";
}