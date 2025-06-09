// intersection of 2 arrays O(n^2) 
// no. belong to 0 to 10^5 ; sorted in inc. order 
#include<iostream>
#include<vector>
using namespace std ;
int main (){
    int arr1[]= {1,2,2,2,2,3,4,5,6,7,8,9,10};
    int arr2[]= {2,2,2,4,6,8,10};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2) /sizeof(arr2[0]);
    int i = 0 , j =0 ;
    int arr3[max(s1,s2)]= {0};
    int k = 0 ;
    while(i<s1 &&j<s2) // 2 pointers approach 
    {
        if (arr1[i]==arr2[j]){arr3[k]=arr1[i];
             k++ ;
            // now to skip duplicate entries
        if(k>=2){if (arr3[k-2]==arr3[k-1])k--;
        }}
        
        else {i++;
        j++;}
    
        if (arr1[i]>arr2[j])j++;
        if(arr1[i]<arr2[j])i++;
    }


    // printing array 
for ( int i = 0 ; i < max(s1,s2) ; i++)
cout << arr3[k] << " ";

    
    return 0 ;
}