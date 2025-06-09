#include<iostream>
#include<queue>
using namespace std ;
int main (){
    //first in = first out ;

    queue<string> q ;
    q.push("daleep");
    q.push("kumar");
    q.push("chhabra");

    cout << "first elment" <<q.front()<<endl;

    q.pop();
    cout<<"first element"<<q.front()<<endl;

    //size 

    
}