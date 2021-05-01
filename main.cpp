#include <iostream>

using namespace std;


	struct Node
	{
		int datum;
		Node * pNext;  // 1 Node contains 2 parts : Data and pNext or called Linked component

	};

	int main ()
	{
		Node *pHead = new Node;      // create a new node (containing the address of new node)
		
		Node * pNext1 = new Node;   // pointer pNext1 is now a new Node
		Node *pNext2 = new Node;
		Node *pNext3 = new Node;
		Node *pNext4 = new Node;
		Node *pNext5 = new Node;

		pHead->pNext = pNext1;  // Now pHead is considered be pNext- It contains the address of pNext1 (Node 1)

		// assign the value for Datum for the Node 1
		
		pNext1->datum = 5;    // assign value 5 for Node 1
		pNext1->pNext = pNext2;  // Now Node 1 contain Pointer called pNext1 - that becomes pNext2 for next Node (Node 2)
	
		pNext2->datum = 17;    // assign value 5 for Node 2
		pNext2->pNext = pNext3;
	
		pNext3->datum = 23;    // assign value 5 for Node 3
		pNext3->pNext = pNext4;

		pNext4->datum = 35;    // assign value 5 for Node 4
		pNext4->pNext = pNext5;

		pNext5->datum = 53;    // assign value 5 for Node 5
		pNext5->pNext = nullptr;  // the last Node - so It contain Null Pointer. No more Next Node

  // Now print the above elements

		cout << pNext1->datum << endl;     //5 : print data of Node 1
  
//	Print datum of Node 2 :

		cout << pNext2->datum << endl;     // 17 :  print data of Node 2
// or :
		cout << pNext1->pNext->datum << endl;     // 17

		
		cout << endl;
		cout << endl;
		

// use For Loop :

	for (const Node*p = pHead->pNext; p != nullptr; p = p->pNext)
   //for (const Node*p = pNext1; p != nullptr; p = p->pNext)
// means :first Node contains Pointer P from pHead, now pHead turns into pNext,  P must not a Nullpointer, then P will become Pointer of Next Node
		{
			cout << p->datum << endl;

			if (p->pNext != nullptr)
			{
				cout << "......." << endl;
			}
		}


	cout << endl;
	cout << endl;

// Or we can use WHILE LOOP :

	Node *pCurrentPointer = pHead->pNext;
	
	while (pCurrentPointer != nullptr)
	{
		cout << pCurrentPointer->datum << endl;

		cout << "......." << endl;

		pCurrentPointer = pCurrentPointer->pNext;

	}


	return 0;

}