//without stl;  using array 
#include<iostream>
using namespace std ;
class stack{
    //properties
    public:
    int *arr ;
    int top ;
    int size ;

    //behaviour 
    stack(int size){
    this-> size = size ;
    arr = new int[size];
    top=-1 ;
}
void push(int element){
   if(size-top>1){
    top++;
    arr[top]=element ;}
  else cout<<"stack overflow";
 }

void pop(){
    if(top>-1){
        top -- ;
   }
   else cout << "stack underflow";

}

int peak(){
    if(top<=-1)
    return -1 ;

    else 
     return arr[top];
}

bool isEmpty(){
    if(top<=-1)
    return true ;
    else return false ;}

void display(){
   int i = top ;
   while(i!=-1){
   cout<<arr[i]<<endl;
   i--; 
}
}
};
int main (){

    // intialization stack of size 5
    stack st(5);
    st.push(100);
    st.push(102);
    st.push(110);
    st.push(108);

    st.display();

    cout<<"positions  "<<st.top<<"  value  "<<st.peak()<<endl;

    st.pop();
    cout<<"positions  "<<st.top<<"  value  "<<st.peak()<<endl;

    st.pop();
    st.pop();
    st.pop();
    cout<<"positions  "<<st.top<<"  value  "<<st.peak();


}
