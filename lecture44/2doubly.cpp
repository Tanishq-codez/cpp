// doubly : added a pointer in each node that stores the address of previous node
// also made changes to handle edge cases when list is nulll
#include<iostream>
using namespace std ;

class node{
    public:
    node*prev;
    int data ;
    node *next ;

    node(int d){
    this->prev = NULL;
    this-> data = d;
    this -> next = NULL ;
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

void print (node *&head){
    node*temp = head;
    while(temp!=NULL){
        cout << temp->data << endl;
        temp = temp -> next;
    }
}

int length(node *& head){
    int len = 0 ;
    node *temp = head ;
    while(temp !=NULL){
        temp = temp->next;
        len ++ ;
    }
    return len ;
}

void inserthead( node * &head , node*&tail ,int data){
    if(head==NULL){ //empty list
        node *temp = new node(data);
        head = temp ;
        tail = temp ;
    }
    else{
    node*temp= new node (data) ;
    temp-> next = head ;
    head->prev = temp ;
    head = temp ;}
}

void inserttail(node*&head ,node*&tail , int data){
    if(tail== NULL){ //empty list
       node * temp =  new node (data);
       tail = temp ;
       head = temp;
    }
    else{
    node *temp = new node (data);
    tail->next = temp ;
    temp->prev = tail ;
    tail = temp ;}
} 

void insertpos(node*&head ,node *&tail, int pos ,int data){
    node *temp = head; // pointer to head for while looop
    if (pos==1){
        inserthead ( head , tail ,data);
        return ;
    }
    int cnt =1 ;
    while (cnt<pos-1){
        temp = temp-> next ;
        cnt ++;
    }
    if(temp-> next == NULL ){
        inserttail(head ,tail,data);
        return ;
    }
    node *insert = new node (data);
    insert-> next = temp-> next ;
    temp-> next->prev = insert ;
    insert->prev = temp ;
    temp -> next = insert ;
}

void delpos(node *&head , int pos){
    if (pos==1){
        node *temp = head;
        temp->next->prev = NULL;
        head = head ->next ;
        temp->next = NULL;
        delete temp;
 }
    else{node *curr = head ;
        node *prev = NULL;
        int cnt = 1 ;
        while (cnt<pos-1){
            prev = curr ;
            curr = curr ->next ;
            cnt ++;
        }
    prev->next = curr->next ;
    curr->next->prev = curr->prev;
    curr->next = NULL;
    curr->prev = NULL ;
    delete curr ;
    
    }
    
}

int main (){

 //  node *node1 ;
     node *head = NULL;
     node *tail = NULL;

    inserthead(head,tail,11);

    inserttail(head , tail ,9);

    insertpos(head ,tail , 2 ,69 );

    delpos(head,2);
    
    print(head);
     
           
}