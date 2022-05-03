// week 3 question 2
#include<iostream>
#define max 30
#include<stdlib.h>
using namespace std ;
// selection sort .
void selectionsort(int arr[] , int n , int swaps , int cmp){
    int min = 0 , temp , i , j;
    for(i = 0 ; i < n-1; i++)
        { 
        min = i ;
        for(j = i+1 ; j < n ; j++){
            cmp++ ; 
        if(arr[j]<arr[min]){
        min = j ;
        }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp ;
        swaps++ ;
        }
        cout<<"sorted array:"<<endl;
        for(int i = 0 ; i < n; i++)
        {
            cout<<arr[i]<<"\t";
        }
         cout<<"\ncomparison ="<<cmp<<endl;
         cout<<"swaps ="<<swaps<<endl;
}
int main(){
    int arr[max] , n , N;
    cin>>N;
    while(N>0){
        int cmp = 0 , swaps = 0 ;
        cout<<"enter limit"<<endl;
        cin>>n;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        selectionsort(arr , n,swaps , cmp);
      N-- ;
}
}