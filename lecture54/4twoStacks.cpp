// data stucture representing two stacks
#include<iostream>
using namespace std ;
class stack{
    //properties
    public:
    int *arr ;
    int top1 ;
    int top2 ;
    int size1 ;
    int size2 ;

    //behaviour 
    stack(int size1 , int size2){
    this-> size1= size1 ;
    this -> size2= size2 ;
    arr = new int[size1+size2];
    top1=-1 ;
    top2=size1+size2;
}
void push1(int element){
   if(size1-top1>1){
    top1++;
    arr[top1]=element ;}
  else cout<<"stack overflow";
 }

void push2(int element){
   if(top2-top1>=1){
    top2--;
    arr[top2]=element ;}
  else cout<<"stack overflow";
 }

void pop1(){
    if(top1>-1){
        top1 -- ;
   }
   else cout << "stack underflow";

}
void pop2(){
    if(top2<size1+size2)
    top2++;
    else cout<<"stack underflow";
}

int peak1(){
    if(top1<=-1)
    return -1 ;

    else 
     return arr[top1];
}

int peak2(){
    if(top2>=size1+size2)
    return -1 ;
    else return arr[top2];
}

bool isEmpty(){
    if(top1<=-1 && top2>=size1+size2)
    return true ;
    else return false ;}

void display(){
   int i = size1+size2-1;
   while(i!=-1){
   cout<<arr[i]<<endl;
   i--; 
}
}
};
int main (){

    // intialization stack of size 5
    stack st(5,5);
    st.push1(100);
    st.push1(102);
    st.push1(110);
    st.push1(108);
    st.push2(100);
    st.push2(102);
    st.push2(110);
    st.push2(108);

    st.display();

    cout<<"positions  "<<st.top1<<"  value  "<<st.peak1()<<endl;

    st.pop1();
    cout<<"positions  "<<st.top1<<"  value  "<<st.peak1()<<endl;

    st.pop2();
    cout<<"positions  "<<st.top2<<"  value  "<<st.peak2();
    st.pop2();
    st.pop2();
    cout<<"positions  "<<st.top2<<"  value  "<<st.peak2();


}
