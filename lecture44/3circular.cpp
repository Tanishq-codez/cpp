// next of last node points the first node
// since it is a circular node there is no tail and head
// we are just taking it for reference
// head == tail->next
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

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

void insertnode(node *&tail, int element, int data)
{
    node *temp = new node(data);
    if (tail == NULL)
    {
        node *temp = new node(data);
        tail = temp;
        temp->next = tail;
        return;
    }

    if (tail->data == element)
    { // could be clubed in the loop below
        temp->next = tail->next;
        tail->next = temp;
        return;
    }

    node *curr = tail;
    while (curr->data != element)
    { // optimise for element not present
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
}

void print(node *&tail)
{
    if (tail == NULL)
    {
        cout << "empty list";
        return;
    }
    node *temp = tail;
    // "do-while" for single node list
    do
    {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp->next != tail);
}

void delvalue(node *&tail, int val)
{
    // if empty
    if (tail == NULL)
    {
        cout << "empty list";
        return;
    }

    else
    {
        node *curr = tail;
        node *prev = NULL;
        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }
        // if single element
        if (prev == curr)
        {
            tail = NULL;
            return;
        }
        // else
        if (tail == curr)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    node *node1 = new node(10);
    node *tail = node1;

    // to insert 11 after 10
    insertnode(tail, 10, 11);

    insertnode(tail, 10, 9);

    insertnode(tail, 11, 12);

    delvalue(tail, 9);

    print(tail);
}
