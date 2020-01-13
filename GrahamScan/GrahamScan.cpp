#include <iostream>
#include "LinkedList.h"
#include "Point.h"
using namespace std;

int main()
{
	Linked_List<Point>* ll = new Linked_List<Point>();
	ll->Load("points1.txt");
	cout << "Hello World!\n";
}