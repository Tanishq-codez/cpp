// merge sort using recurssions
// single blocks mein todna hai phir merge
// time complexity of nlogn;
#include<iostream>
using namespace std ;

void merge(int arr[], int s , int e){
    int mid = (s+e)/2;
    int l1=mid-s+1 ;
    int l2=e-mid   ;
    int *first = new int[l1];
    int *second = new int[l2];
    
    int k = s ;
    for(int i=0 ;i<l1;i++){
        first[i] = arr[k++];     
    }
    for (int j=0 ; j<l2 ;j++){
        second[j]=arr[k++];
    }
    int in1=0;
    int in2=0;
    int index = s ; // jahan se element nikalne shuru kiye udhar hi daalne shuru

    while(in1<l1 && in2<l2){
        if(first[in1]<second[in2])
            arr[index++] = first[in1++];
         else    arr[index++]= second[in2++];}

    while(in1< l1){
        arr[index++]=first[in1++];

    }
    while(in2<l2)
         arr[index++]=second[in2++];

    delete []first;  // delete dynamically allocated 
    delete []second; // to avoid memory leak

}

void msort(int arr[],int s , int e)
{if(s>=e){return;}
 int mid=(s+e)/2;
//left part sort
msort(arr,s,mid);
//right part sort
msort(arr,mid+1,e);
//merge
merge(arr,s,e);}

int main (){
    int arr[]={38,27,43,3,9,82,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    msort(arr,0,size-1); // array pass krte samein end to dalna hi padta hai
    
    for(int i =0 ; i<size ; i++ )
    cout<<arr[i]<<" ";
}
// hw - gfg inversion count + (application of merge sort)