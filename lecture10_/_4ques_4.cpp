//find duplicates in an array no(1,n-1)
//count each ealement == bruteforce
#include<iostream>

using namespace std ;
int main (){
    int arr[] = {2,3,4,5,6,1,7,8,9,10,3};
    int ans = 0 ;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < size;i++){
    ans = ans ^ arr[i];
    }
    for (int i = 1 ; i<=size-1;i++){
        ans = ans ^ i;// sabke pair comlpete honge lekin ek ka badh jayega  
    }

   cout << ans;
   return 0 ;

}