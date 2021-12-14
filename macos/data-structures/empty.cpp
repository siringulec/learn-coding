/*#include<iostream>
using namespace std;
template<class t>

class Stack {
private:
	struct StackNode
	{
		t item;
		StackNode* next;
	};
	StackNode* topPtr, * curPtr;
public:
	Stack() {
		topPtr = NULL;
	}
	bool isEmpty()
	{
		return topPtr == NULL;
	}
	void push(t newItem)
	{
		StackNode* newPtr = new StackNode;
		if (newPtr == NULL)
			cout << "Stack push cannot allocate memory";
		else
		{
			newPtr->item = newItem;
			newPtr->next = topPtr;
			topPtr = newPtr;
		}
	}
	void pop() {
		if (isEmpty())
			cout << "Stack empty on pop";
		else {
			StackNode* temp = topPtr;
			topPtr = topPtr->next;
			temp->next = NULL;
			delete temp;
		}
	}
	void pop(t stackTop)
	{
		if (isEmpty())
			cout << "Stack empty on pop";
		else {
			cout << "Deleted one Element from stack\n";
			stackTop = topPtr->item;
			StackNode* temp = topPtr;
			topPtr = topPtr->next;
			temp->next = NULL;
			delete temp;

		}
	}
	void getTop(t&stackTop)
	{
		if (isEmpty())
			cout << "stack empty on getTop";
		else
			stackTop = topPtr->item;
		cout << "\nTop Element of the stack is " << stackTop;
		cout << endl;
	}
	void display()
	{
		curPtr = topPtr;
		cout << "\nItems in the stack : ";
		cout << "\n === \n";
		while (curPtr != NULL)
		{
			cout <<"  "<< curPtr->item << endl;
			curPtr = curPtr->next;
		}
		cout << " ===\n";
	}
};
int main()
{
	Stack<char>s;
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.display();
	char ch='p';
	s.getTop(ch);
	cout << "the top now is " << ch<<endl;
	s.pop();
	s.getTop(ch);
	cout << "the top now is " << ch<<endl;
	s.display();
	return 0;
}
*/

#include <bits/stdc++.h>
// C++ code for linked list merged sort
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
	int data;
	Node* next;
};

/* function prototypes */
Node* SortedMerge(Node* a, Node* b);
void FrontBackSplit(Node* source,
					Node** frontRef, Node** backRef);

/* sorts the linked list by changing next pointers (not data) */
void MergeSort(Node** headRef)
{
	Node* head = *headRef;
	Node* a;
	Node* b;

	/* Base case -- length 0 or 1 */
	if ((head == NULL) || (head->next == NULL)) {
		return;
	}

	/* Split head into 'a' and 'b' sublists */
	FrontBackSplit(head, &a, &b);

	/* Recursively sort the sublists */
	MergeSort(&a);
	MergeSort(&b);

	/* answer = merge the two sorted lists together */
	*headRef = SortedMerge(a, b);
}

/* See https:// www.geeksforgeeks.org/?p=3622 for details of this
function */
Node* SortedMerge(Node* a, Node* b)
{
	Node* result = NULL;

	/* Base cases */
	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);

	/* Pick either a or b, and recur */
	if (a->data <= b->data) {
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else {
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return (result);
}

/* UTILITY FUNCTIONS */
/* Split the nodes of the given list into front and back halves,
	and return the two lists using the reference parameters.
	If the length is odd, the extra node should go in the front list.
	Uses the fast/slow pointer strategy. */
void FrontBackSplit(Node* source,
					Node** frontRef, Node** backRef)
{
	Node* fast;
	Node* slow;
	slow = source;
	fast = source->next;

	/* Advance 'fast' two nodes, and advance 'slow' one node */
	while (fast != NULL) {
		fast = fast->next;
		if (fast != NULL) {
			slow = slow->next;
			fast = fast->next;
		}
	}

	/* 'slow' is before the midpoint in the list, so split it in two
	at that point. */
	*frontRef = source;
	*backRef = slow->next;
	slow->next = NULL;
}

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

/* Function to insert a node at the beginning of the linked list */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Driver program to test above functions*/
int main()
{
	/* Start with the empty list */
	Node* res = NULL;
	Node* a = NULL;

	/* Let us create a unsorted linked lists to test the functions
Created lists shall be a: 2->3->20->5->10->15 */
	push(&a, 15);
	push(&a, 10);
	push(&a, 5);
	push(&a, 20);
	push(&a, 3);
	push(&a, 2);

	/* Sort the above created Linked List */
	MergeSort(&a);

	cout << "Sorted Linked List is: \n";
	printList(a);

	return 0;
}

// This is code is contributed by rathbhupendra

/* C++ program to merge two sorted linked lists */
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int data;
	Node* next;
};

/* pull off the front node of
the source and put it in dest */
void MoveNode(Node** destRef, Node** sourceRef);

/* Takes two lists sorted in increasing
order, and splices their nodes together
to make one big sorted list which
is returned. */
Node* SortedMerge(Node* a, Node* b)
{
	/* a dummy first node to hang the result on */
	Node dummy;

	/* tail points to the last result node */
	Node* tail = &dummy;

	/* so tail->next is the place to
	add new nodes to the result. */
	dummy.next = NULL;
	while (1)
	{
		if (a == NULL)
		{
			/* if either list runs out, use the
			other list */
			tail->next = b;
			break;
		}
		else if (b == NULL)
		{
			tail->next = a;
			break;
		}
		if (a->data <= b->data)
			MoveNode(&(tail->next), &a);
		else
			MoveNode(&(tail->next), &b);

		tail = tail->next;
	}
	return(dummy.next);
}

/* UTILITY FUNCTIONS */
/* MoveNode() function takes the
node from the front of the source,
and move it to the front of the dest.
It is an error to call this with the
source list empty.

Before calling MoveNode():
source == {1, 2, 3}
dest == {1, 2, 3}

After calling MoveNode():
source == {2, 3}
dest == {1, 1, 2, 3} */
void MoveNode(Node** destRef, Node** sourceRef)
{
	/* the front source node */
	Node* newNode = *sourceRef;
	assert(newNode != NULL);

	/* Advance the source pointer */
	*sourceRef = newNode->next;

	/* Link the old dest off the new node */
	newNode->next = *destRef;

	/* Move dest to point to the new node */
	*destRef = newNode;
}


/* Function to insert a node at
the beginning of the linked list */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(Node *node)
{
	while (node!=NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}

/* Driver code*/
int main()
{
	/* Start with the empty list */
	Node* res = NULL;
	Node* a = NULL;
	Node* b = NULL;

	/* Let us create two sorted linked lists
	to test the functions
	Created lists, a: 5->10->15, b: 2->3->20 */
	push(&a, 15);
	push(&a, 10);
	push(&a, 5);

	push(&b, 20);
	push(&b, 3);
	push(&b, 2);

	/* Remove duplicates from linked list */
	res = SortedMerge(a, b);

	cout << "Merged Linked List is: \n";
	printList(res);

	return 0;
}

// This code is contributed by rathbhupendra
