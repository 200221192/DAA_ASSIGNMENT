#include<iostream>
#include<stdlib.h>
#define max 30 
using namespace std ;
// week 4 qusetion 2
// quick sort 
int cmp = 0 , s = 0;
void quicksort(int a[] , int n , int lb , int ub ){
    int temp ,pivot , start , end ;
    if(lb < ub){
     pivot = lb ;
     start = lb ;
     end = ub ;
     while(start < end){
         cmp++ ;
         while(a[start] <= a[pivot] ){
             start++ ;
         }
         while(a[end] > a[pivot]){
             end-- ;
         }
         cmp++ ;
         if(start < end ){
             //swap(a[start] , a[end]);
             temp = a[start];
             a[start] = a[end];
             a[end] = temp ;
             s++ ;
         }
     }
    //swap(a[lb] , a[end]);
    temp = a[pivot];
    a[pivot] = a[end];
    a[end] = temp ;
    s++ ;
    quicksort(a ,n ,lb , end-1);
    quicksort(a , n , end+1 , ub);
}
}
int main(){
    int a[max],n , i , j ;
    int N;
    cin>>N;// no of test cases
    while(N>0)
    {
    cin>>n; // size of array
    cout<<"\nenter elements:"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<"\t";   
    }
    quicksort(a , n , 0 , n-1);
    cout<<"\narray after sorting"<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\ncomparison ="<<cmp;
    cout<<"\nswap ="<<s;
    cmp = 0  , s = 0 ;
    N-- ;
    }
    return 0 ;
}