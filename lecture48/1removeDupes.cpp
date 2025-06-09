// remove duplicates from a sorted lnk list
#include <iostream>
using namespace std;

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
    // destructor only deleting one element
    ~node()
    {
        // Prevent accidental recursive deletion
        this->next = NULL;
    }
};


void inserthead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void remDupes(node *&head)
{
    if (head == NULL)
        return;

    node *current = head;
    while (current != NULL && current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            node *duplicate = current->next;
            current->next = current->next->next;
            delete duplicate;
        }
        else
        {
            current = current->next;
        }
    }
}

int main()
{
    node *node1 = new node(25);
    node *head = node1;
    inserthead(head, 24);
    inserthead(head, 24);
    inserthead(head, 23);
    inserthead(head, 22);
    inserthead(head, 22);
    inserthead(head, 21);
    inserthead(head, 20);
    inserthead(head, 20);

    remDupes(head);
    print(head);

    delete head;
}
