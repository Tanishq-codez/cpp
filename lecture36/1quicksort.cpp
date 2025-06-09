// quicksort - sorting algo
//  ek element uthao (pivot) 
// sorted array wali jagah pe daalo
// count element less than pivot

#include<iostream>
using namespace std ;
int partition(int arr[],int s ,int e){
    int count = 0 ;
    for(int i=s+1 ;i<=e;i++){
        if(arr[i]<arr[s]) count++;
    }  
    int pivot= s+count ; //pivot index
    swap(arr[pivot],arr[s]);

    //ab pivot ke left right wala part smbhalo

    for(int i =s ; i<pivot; i++){//dble pointer can reduce complexity
        if(arr[i]>arr[pivot])
        for (int j=e ; j>pivot ; j--){
            if(arr[j]<arr[pivot]) 
            swap(arr[j],arr[i]);
        }
    }
return pivot;}
void quick(int arr[], int s , int e){
    if(s>=e) return ;
    int p = partition(arr,s,e);
    quick(arr,s,p-1);
    quick(arr,p+1,e);
}
int main (){
  int arr[]={2,3,45,2,34,12,90,77,44,32,98};
  int size = sizeof(arr)/sizeof(arr[0]);
  quick(arr,0,size-1);
  
  for (int i =0 ; i< size ; i++)
  { cout<<arr[i]<<" ";}

}
//in place sorting ?
//stable algo ?
//when is mergse sort prefered and when is quick sort prefered
