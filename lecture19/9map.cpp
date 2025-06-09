#include<iostream>
#include<map>

using namespace std;

int main (){
    map<int,string> m ;
 
    m[1]="babbar";
    m[13]="kumar";
    m[2]="love";

    //inserting 
    m.insert({5,"bheem"});
   
    // sorted by default

    // printing
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //count , erase , find 

    auto it =m.find(5);  //iterator nikala
    for(auto i=it;i!=m.end();i++){
       cout<<(*i).first<<endl; 
    }
}