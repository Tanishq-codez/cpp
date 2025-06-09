// minimum cost to make a string valid;
#include<iostream>
#include<stack>
using namespace std ;
int minCost(stack<char>s){
    if (s.size()%2!=0) return -1 ;
   
}
int main (){
    string str = "}{{}}}";
    stack<char> s ;
    for (int  i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    int ans = minCost(s);
    

}