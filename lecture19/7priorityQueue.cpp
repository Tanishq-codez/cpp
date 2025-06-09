//by default maxheap
// maxheap-sabse pehle sabse bada bahar
#include<iostream>
#include<queue>

using namespace std; 

int main (){
    priority_queue<int> maxi ;

    //for min heap

    priority_queue<int,vector<int>,greater<int>> mini ;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(2);

    //printing
    int n = maxi.size();
    for(int i = 0 ;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }    

    // same with mini


}

