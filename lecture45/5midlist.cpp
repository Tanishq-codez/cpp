// hare and tortoise approach
// slow and fast pointer approach
#include <iostream>
using namespace std;
class node
{
public:
    int data; // data peice

    node *next; // pointer jis cheez ko point krta usi type ka hota hai

    // constructor

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
            delete next;
        this->next = NULL;
        cout << "memory is free with data " << value << endl;
    }
};
void inserthead(node *&head, int d)
{ // * - reference ; & - dereference
    // new node
    node *temp = new node(d); // dynamic node using the above constructor
    // "head" is the pointer to the first node
    temp->next = head; // temp ke nxt mein purana head
    head = temp;       // head wala pointer ab temp ko pooint karega
}
// traverse a link list
void print(node *&head)
{ // helps when you need to change where the pointer points

    node *temp = head; // temp is now pointing where the head was pointing
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void mid(node *&head)
{   if(head==NULL){cout<<"NULL";
    return;}
    if(head->next==NULL){cout<<head->data;
        return ;}
    if(head->next->next == NULL){cout<<head->next->data;
        return ; }  // ?needed
    node *temp1 = head;
    node *temp2 = head;
    while (temp1 != NULL && temp1->next != NULL)
    {
        temp1 = temp1->next->next;
        temp2 = temp2->next;
    }
    cout << "mid = " << temp2->data;
}

int main()
{
    node *node1 = new node(9);
    node *head = node1;
    inserthead(head, 10);
    inserthead(head, 11);
    inserthead(head, 12);
    inserthead(head, 13);
    inserthead(head, 14);
    print(head);
    mid(head);
}