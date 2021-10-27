#include<iostream>
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
