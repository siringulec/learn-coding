#include <iostream>

using namespace std;

class Merge_Sort{

	public:
        struct Employee {
            char firstName[20];
            char lastName[20];
            unsigned int age;
            char gender;
            double hourlySalary;
            Employee* next;
        };

        // sorts the linked list by changing next pointers (not data)
        void MergeSort(Employee** head) {
            Employee* Head = *head;
            Employee* a;
            Employee* b;
            if ((Head == NULL) || (Head->next == NULL))
                return;

            Split(Head, &a, &b);
            // Recursively sort a and b
            MergeSort(&a);
            MergeSort(&b);
            *head = Merge(a, b);
        }
        /* Takes two lists sorted in increasing
           order, and splices their nodes together
           to make one big sorted list which
           is returned. */
        Employee* Merge(Employee* a, Employee* b) {
            Employee* result = NULL;
            if (a == NULL)
                return (b);

            else if (b == NULL)
                return (a);

            if (a->age <= b->age) {
                result = a;
                result->next = Merge(a->next, b);
            }

            else {
                result = b;
                result->next = Merge(a, b->next);
            }
            return (result);
        }

        /*Split the nodes of the given list into front and back halves,
          using the fast/slow pointer strategy.*/
        void Split(Employee* source, Employee** front, Employee** back) {

            Employee* fast;
            Employee* slow;
            slow = source;
            fast = source->next;
            while (fast != NULL) {
                fast = fast->next;
                if (fast != NULL) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
            *front = source;
            *back = slow->next;
            slow->next = NULL;
        }

        void printList(Employee* info){
            while (info != NULL) {
                cout << info->age << " ";
                info = info->next;
            }
        }

        void push_age(Employee** head, int new_age) {

            Employee* new_employee = new Employee();
            new_employee->age = new_age;
            new_employee->next = (*head);
            (*head) = new_employee;
        }
};


int main()

{
    Merge_Sort sort;
    Merge_Sort::Employee* a = NULL;
    sort.push_age(&a, 25);
    sort.push_age(&a, 30);
    sort.push_age(&a, 32);
    sort.push_age(&a, 43);
    sort.push_age(&a, 62);
    sort.push_age(&a, 45);
    sort.MergeSort(&a);

    cout << "Employee age sorted:";
    cout << "\n============== \n";
    sort.printList(a);
    cout << "\n============== \n";

    return 0;

}
