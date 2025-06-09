// reverse link list in groups of k 
#include<iostream>
using namespace std ;

class node{
    public :
    int data ;
    node *next ;

    node(int data){
    this->data = data ;
    this->next = NULL ;
    }

    ~node(){
        int val = this -> data ;
        if(this->next!=NULL){
            delete next ;
        }
        this->next = NULL ;
    // cout<<"memory is free with data "<<val ;
}
};

void inserthead(node *&head , int data){
    node *temp = new node(data) ;
    temp->next= head ;
    head = temp ;
}

void print(node*& head){
    node *temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next ;
    }
}
void grpRev(node*& head, int k) {
    node* curr = head;
    node* prev = nullptr;
    node* next = nullptr;
    
    // Check if at least k nodes exist
    node* temp = head;
    for (int i = 0; i < k; i++) {
        if (!temp) return; // Base case: list has <k nodes
        temp = temp->next;
    }
    
    // Reverse k nodes iteratively
    int count = 0;
    while (curr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    // Recursively reverse remaining nodes and link
    if (next) {
        grpRev(next , k); //ek line mein alag duniya
        head->next =next; // Link reversed group to next group
    }
    
    // Update head to the new front of the reversed group
    head = prev;
}
int main (){
    node *node1 = new node (19);
    node *head = node1 ;
    inserthead(head,20);
    inserthead(head,21);
    inserthead(head,22);
    inserthead(head,23);
    inserthead(head,24);
    int k ;
    cin>>k;
    grpRev(head,k);
    print(head);

    delete head ;
}  
