// link list - type of linear data stucture
//             collection of nodes
// node      - data + address of next node

// use       - dynamic data structure 
//             can grow and shrink on runtime unlike arr[20]
//             easy deletiion and shifting

// types     - singly  ; doubly ; circular ; circular doubly link list

/*in void fnc u dont need to return , if u dont wanyt to exit early */
#include<iostream>
using namespace std ;
//implementation
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

//insertion of new node at head = temp creation + placement
void inserthead(node *&head , int d){ // * - reference ; & - dereference
   //new node
   node *temp = new node(d); //dynamic node using the above constructor
   // "head" is the pointer to the first node 
   temp -> next = head ; // temp ke nxt mein purana head
   head = temp ; // head wala pointer ab temp ko pooint karega
} 

void inserttail(node *&tail , int d){
    node *temp = new node(d);
    tail-> next = temp;
    tail = tail->next ;
    

}

void insertpos(node*tail,node *&head , int pos , int data ){
    if(pos==1){inserthead(head , data);}
    node*temp= head;
    for(int i=1 ; i<pos-1;i++){
        temp=temp->next;
    }

    if(temp->next==NULL){
      inserttail(tail,data); 
    }
    
    node *insert = new node(data);
    insert->next = temp->next;
    temp->next = insert;

}

void delpos(node *&head , int pos){
    if(pos==1){
        node *temp = head ;
        head=head->next;
        // memory free using destructor
        temp->next=NULL;
        delete temp ; 
    }

    else {
        node*curr = head ;
        node *prev = NULL ;
        int count = 1 ;
        while(count < pos) {
            prev=curr;
            curr= curr->next ;
            count ++ ;
        }   // ?updating tail after deleting last node 
        prev->next = curr->next ;
        curr->next = NULL ;
        delete curr ;
    }
}

// void delvalue(node *&head , int d){
//         node * curr = head ;
//         node * prev = NULL ;
//         int pos = 1 ;
//         while(curr!=NULL){
        
//         prev = curr ;
//         curr = curr-> next ;
    
//             if(curr->data==d){
//             if(pos==1){
//                 node *temp = head ;
//                 head=head->next;
//                 // memory free using destructor
//                 temp->next=NULL;
//                 delete temp ;
//             }
//             else;
//             prev=curr->next ;
//             break ;
//             }
//             pos++;
//         }
//         delete curr ;
//}


//traverse a link list 
void print (node* &head){ // helps when you need to change where the pointer points

    node* temp = head ; // temp is now pointing where the head was pointing
    while(temp!=NULL)
    {cout<< temp->data <<endl;
     temp = temp->next;}



}
int main (){
    // creating a node
    node* node1 = new node(10);   //dynamic heap allocation
    // cout << node1-> data ;
    // cout << node1-> next ;

    // pointing head 
    node *head = node1; // ppointer to the first node
    node *tail = node1;
   
    inserthead(head,12);

    inserttail(tail,9);

    //insert at a given position

    insertpos(tail ,head,2,19);

    //delete a particular position
    delpos(head , 2);

    //delete a particular element (can also be done with position)
    
   //  delvalue(head,10);

    // print(head);
    print(head);
}