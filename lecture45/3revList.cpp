// one more approach
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
    ~node(){
        int value = this-> data ;
        //memory free
        if(this->next!=NULL)
        delete next ;
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

// it will return head of the reverse link list
node *reverse (node *&head ){
    if(head==NULL || head->next == NULL) //base case
    return head ;
    //choti list ke reverse ka head 
     node* chotahead = reverse(head->next); // head abhi bhi ussi node ko hi point krra hai
     head->next->next = head ;
     head -> next = NULL;
     return chotahead ;

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
     head = reverse(head); //**reverse is returning a node in this approach
     print(head);

// hw- reverse doubly link list
}