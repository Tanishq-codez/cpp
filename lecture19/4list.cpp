#include<iostream>
#include<list>

using namespace std;
int main (){
list<int> l;

l.push_back(1);
l.push_front(2);
//similarly pop can be done

for(int i:l){
    cout<<i<<"";
}
//erase
l.erase(l.begin());
//size
cout<<"size of list"<<l.size();
//initalize 5 elemnt all 100
list<int>n(5,100);
//or m=n
list<int>m(n);

return 0;}