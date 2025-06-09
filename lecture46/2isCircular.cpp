// check if a link list is circular or not 
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
bool isCircular(node *& head){
    if (head==NULL) return true ; //in question
    node *temp =head ;
    while(1){
    if(temp->next==NULL) return false ;
    else if (temp->next==head) return true ;
    temp=temp->next ;
    }
}
int main (){
    node *node1 = new node (19);
    node *head = node1 ;
    inserthead(head,20);
    inserthead(head,21);
    inserthead(head,22);
    inserthead(head,23);
    inserthead(head,24);
    if(isCircular(head))
    cout<<"its a circular link list";

    else cout <<" not a circular link list";

    delete head ;
}  
// hw - floid cycle detection algo