// you are given a 2d array n*n with 0s and 1s
// the rat can only move through 1s
// list all the paths
// report answer in lexicographical order (dictonary);

#include <iostream>
#include<vector>
using namespace std;

bool left(int i , int j , int visited[4][4]){
   if(visited[i][j-1])return false ;
}
bool right(int i , int j , int visited[4][4]){
   if(visited[i][j+1])return false ;
}

bool up(int i , int j , int visited[4][4]){
   if(visited[i-1][j])return false ;
}

bool down(int i , int j , int visited[4][4]){
    if(visited[i+1][j])return false ;
}

// vector/array <string/array/vector> 
// return karne ke liye kis cheez mein store karana hai is important 
vector<string> listPath(int arr[4][4]) // passing a 2d array ; use &arr[row][col] for passing by reference
{   string path = "";
    vector<string>ans ;
    int visited[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(arr[0][0]!=1){
       return ans  ;
    }
    int i = 0 ;
    int j = 0 ;
    if(left(i,j,visited)){
        j-- ;}
    if(right(i,j,visited)){
        j++; }
    if(up(i,j,visited)){
        i--;
    }
    if(down(i,j,visited)){
        i++;
    }
    
}
int main()
{
    int arr[4][4] = {1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1}; 

    listPath(arr);
}
