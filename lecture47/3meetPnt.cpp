// check out where they meet
// a+b path diagram in scrnshot
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

bool floyd(node*& head) {
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
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            // temp1->next is the beginning of the loop (head in this case)
            cout << "Cycle starts at node with data: " << slow->data << endl;
            return true;
        }
    }
    return false;
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

    if (floyd(head)) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle found." << endl;
    }

    // BREAK CYCLE BEFORE DELETION
    temp1->next = NULL;

    // Delete nodes safely
    while (head != NULL) {
        node* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}
