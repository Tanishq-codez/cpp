// implement using linklist 
#include<iostream>
using namespace std ;

class node{
  public:
  int data ;
  node *next;  

node(int data){
    this->data= data ;
    this->next= NULL;
}
~node(){           //called "delete head/curr/temp";
    int temp = this->data ;
    if(this->next!=NULL)
    delete next ; // kinda recurrsion
    this->next = NULL;
    cout<<"memory is free with data "<<temp;}
};
void push(node *&top , int data){
     node*temp = new node(data) ;
     temp->next = top;
     top = temp ;
}
void pop(node*&top){
  if (top == NULL) {
        cout << "Stack Underflow!" << endl;
        return;
    }
     node *temp = top ;
     top = top->next ;
     temp->next = NULL ;
}
void display(node*&top){
    node *temp = top;
    while(temp!=NULL){
    cout<< temp->data<<endl ;
    temp = temp->next ;
}
}
int peak(node *&top){
  if (top == NULL) {
        cout << "Stack is empty!" << endl;
        return -1;}
    return top->data ;
}
bool isempty(node *&top){
     if(top==NULL){
      return true ;
     }
     else return false;
}
int main (){
    // node *node1 = new node(10);
    // node *top = node1;
   
    node *top = NULL ;
    push(top,100);
    push(top,102);
    push(top,103);
    push(top,108);
    push(top,105);
    push(top,104);

    display(top);

    pop(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);

    cout<<peak(top)<<endl;

    if(isempty(top)){
      cout<<"empty"<<endl;
    }
    else cout<<"not empty"<<endl;
    
    delete(top);
    // else to Clean up remaining nodes
    // while (!isEmpty(top)) {
    //     pop(top);}

}
