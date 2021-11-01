
#include <iostream>
using namespace std;
template <class t>

class Gulec{
private:
    struct Node {
        t data;
        Node *next;
    };
    Node* top, *ptr;
public:
    Gulec() {
		top = NULL;
	}
    void add_element(t value) {
        Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }
    void delete_element () {
        if(top==NULL)
            cout<<"Stack empty."<<endl;
        else {
            cout<<"The deleted element is "<< top->data <<endl;
			Node* temp = top;
			top = top->next;
			temp->next = NULL;
			delete temp;
        }
    }
    void print_stack() {
        if(top==NULL)
            cout<<"Stack is empty.";
        else {
            ptr = top;
            cout<<"The stack elements are:\n";
            while (ptr != NULL) {
                cout<< ptr->data <<" ";
                ptr = ptr->next;
            }
        }
        cout<<endl;
    }
};

int main() {
    Gulec <string> stack;
    stack.add_element("01.11.21");
    stack.add_element("Güleç");
    stack.add_element("Şirin");
    stack.print_stack();
    stack.delete_element();
    stack.delete_element();
    stack.delete_element();
    stack.delete_element();
   return 0;
}
