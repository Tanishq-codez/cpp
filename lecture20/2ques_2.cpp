// merge 2 sorted array without 3rd array
// har i pe check kar ki j yahan isert ho sakta hai kya
//if yes to karde phir bsdk (not good appeoavh)
//instead start from end (merge sort algo)
#include<iostream>      
using namespace std ;
int main (){
    int arr1[13]={1,3,5,7,9,11,12,13};
    
    int arr2[]={2,4,6,8,10};
    int s1 = 13;
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    // for (int i = 0 ; i< s1 ; i++){
    //     cout<<arr1[i]<<" ";
    // }
    int i = 0 , j = 0 ;
    while(i<s1){            
            int k = s1;  
            if(arr2[j]<arr1[i] ){
            //insert 
            while(k>=i){arr1[k]=arr1[k-1];
            k--;}
            arr1[i]=arr2[j];
            j++ ; i++;}
    else i++ ;    
    }
    for (int i = 0 ; i< s1 ; i++){
        cout<<arr1[i]<<" ";
    }

    return 0 ;
}