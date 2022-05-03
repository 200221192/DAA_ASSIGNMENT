#include<iostream>
#include<bits/stdc++.h>
#define max 30  
using namespace std;
//week5 question2
int main(){
    int n  , N , i , j ;
    int arr[max];
    cin>>N;//number of test cases
    while(N>0){
        cin>>n;//limit of array
        for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        }
        int key ;
        cout<<"\nenter key"<<endl;
        cin>>key; // key whose sum to be searched 
        sort(arr,arr+n);
        int l = 0 , r = n-1 ,flag = 0 ;
        while(l<r){
        if(arr[l]+arr[r]==key){
            cout<<arr[l]<<" "<<arr[r];
            cout<<",";
            r-- ;
            flag = 1;
        }
        else if(arr[l] + arr[r] < key){
            l++ ;
        }
        else{
            r-- ;
        }
    }
    if(flag == 0){
        cout<<"\nNo such pair exist"<<endl;
    }
        N-- ;
    }

}
