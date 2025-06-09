//remove the looping from linked list 
//point the node before intersection to NULL
#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    
    node(int data) : data(data), next(NULL) {}
    
    ~node() {
        // WARNING: Destructor will cause infinite loop if list is circular!
        node* temp = this->next;
        while (temp != NULL) {
            node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

void inserthead(node*& head, int data) {
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

bool remove(node*& head) {
    if (head == NULL) return false;
    node* fast = head;
    node* slow = head;
    
    // Phase 1: Detect cycle
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            // Phase 2: Find cycle start
            slow = head;
            node*temp = NULL; // will remain null if cycle starts at null
            while (slow != fast) {
                temp = slow ;
                slow = slow->next;
                fast = fast->next;
            }
            temp->next = NULL ;

            return true;
        }
    }
    return false;

}
void print (node* &head){ // helps when you need to change where the pointer points

    node* temp = head ; // temp is now pointing where the head was pointing
    while(temp!=NULL)
    {cout<< temp->data <<endl;
     temp = temp->next;}
    }

int main() {
    node* head = new node(19);
    inserthead(head, 20);
    inserthead(head, 21);
    inserthead(head, 22);
    inserthead(head, 23);
    inserthead(head, 24);

    // Create a cycle (24 -> 23 -> 22 -> 20 -> 24)
    node* temp1 = head->next->next->next; // Points to 20
    temp1->next = head; // Create cycle

    if (remove(head)) {
        cout << "Cycle detected! and removed " << endl;
    } else {
        cout << "No cycle found." << endl;
    }

    print (head); // issue ?

    // BREAK CYCLE BEFORE DELETION
    temp1->next = NULL;

    // Delete nodes safely
    while (head != NULL) {
        node* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}
// hw - 5 ways to remove loop + 3 ways to detect loop ; study them all
