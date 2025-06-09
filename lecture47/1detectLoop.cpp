//detect loop in LL using map stl
#include<iostream>
//no need of <map> internal sorting 
#include<unordered_map> // better time complexity
using namespace std ;

class node{
    public :
    int data ;
    node *next ;

    node(int data){
    this->data = data ;
    this->next = NULL ;
    }
    // iterative destructor instead of recurssive to prevent stack overflow
    ~node(){
       node* temp = this->next;
while (temp != NULL) {
    node* nextNode = temp->next;
    delete temp;
    temp = nextNode;
}
this->next = NULL;
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
bool detect(node *&head){
    if (head==NULL)return false ;
  //map(key,value)
unordered_map <node* , bool> visited ;  //creating a map named "visited"
    node * temp = head ;
    while (temp!=NULL){ 
        // cycle is present 
        if (visited[temp]==true){ //square brackets
            return 1 ;
        }
        visited[temp]=true ;
        temp= temp->next ;
    }
   return false ; 
}
int main (){
    node *node1 = new node (19);
    node *head = node1 ;
    inserthead(head,20);
    inserthead(head,21);
    inserthead(head,22);
    inserthead(head,23);
    inserthead(head,24);
    
    //test case
    node * temp1 =head->next->next->next;
    node * temp2 =head;
    temp1->next=temp2 ;
    
    
    if (detect(head)==1){
        cout<<"there is looping";}

    else cout<<"no looping";


    // Properly deleting all nodes
    node* temp = head;
    while (temp != NULL) {
        node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    
    head = NULL; // Prevents dangling pointer

}  
