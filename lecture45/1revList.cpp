//always look for edge cases : like empty list , single node
#include<iostream>
using namespace std ;
    class node{
        public:
        int data ;   // data peice
                      
        node *next ; // pointer jis cheez ko point krta usi type ka hota hai
    
    //constructor
    node( int data ){
        this-> data = data;
        this-> next = NULL ;
    }
    
    //destructor
    //The destructor recursively deletes all nodes in the linked list starting from the current node.
    ~node(){
        int value = this-> data ;
        //memory free
        if(this->next!=NULL)
        {delete next ;}//This triggers the destructor of the next node, which may in turn delete its own next, and so on 
        this-> next = NULL;
        cout<<"memory is free with data "<< value << endl;
    }
     };
     void inserthead(node *&head , int d){ // * - reference ; & - dereference
        //new node
        node *temp = new node(d); //dynamic node using the above constructor
        // "head" is the pointer to the first node 
        temp -> next = head ; // temp ke nxt mein purana head
        head = temp ; // head wala pointer ab temp ko pooint karega
     } 
     //traverse a link list 
void print (node* &head){ // helps when you need to change where the pointer points

    node* temp = head ; // temp is now pointing where the head was pointing
    while(temp!=NULL)
    {cout<< temp->data <<endl;
     temp = temp->next;}
    }
void reverse (node*&head){
    node *curr = head ;
    node *prev= NULL;
    node *forward = curr->next ;
    while(curr!=NULL){
    // forward = curr -> next ;
    // curr->next=prev;
    // prev = curr ;
    curr->next = prev;
    prev=curr;
    curr=forward;
    if(forward!=NULL)  //  ******
    forward=forward->next;}
    head=prev;
}
int main (){
     node *node1= new node(9);
     node *head = node1 ;
     inserthead(head,10);
     inserthead(head,11);
     inserthead(head,12);
     inserthead(head,13);
     inserthead(head,14);
     //print (head);
     reverse(head);
     print(head);
}