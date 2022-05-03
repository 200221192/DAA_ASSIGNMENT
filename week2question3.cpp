// week 2 question 3
#include<iostream>
using namespace std ;
void diff(int arr[] , int n , int key){
    int count = 0 ;
    for(int i = 0 ; i <= n ; i++){
        for(int j = i+1 ; j <= n ; j++ ){
            if(arr[i]-arr[j] == key || arr[j]-arr[i]==key)
            count++ ;
        }
    }
   cout<<count<<endl;
}
int main()
{
int i , n , N  ,  key ;
cin>>N;
 while(N>0)
 {
     cin>>n;
     int arr[n]  ;
     cout<<"enter elements:"<<endl;
     for(i = 0 ; i < n ; i++ )
     {
         cin>>arr[i];
     }
     cout<<"enter the key"<<endl;
     cin>>key;
     diff( arr , n , key);
     N-- ;
 }
 return 0 ;
}