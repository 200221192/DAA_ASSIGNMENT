// week 2 question 2
#include<iostream>
using namespace std ;
void sum(int arr[] , int n )
{
    int  i , j , k , flag = 0 ;
    for( i = 0 ; i <= n ; i++ ){
        for(j = i+1 ; j <= n ; j++){
            for(k = j+1 ; k <= n ; k++){
                if( arr[i] + arr[j] == arr[k] ){
                    cout<<i+1<<", "<<j+1<<" ,"<<k+1<<endl;
                flag = 1 ;
                break;
                }
            }
        }
    }
    if(flag == 0)
    cout<<"No sequence found"<<endl;
}
int main()
{
int i , j , n , N ;
cin>>N;
 while(N>0)
 {
     cin>>n;
     int arr[n] ;
     cout<<"enter the elements:"<<endl;
     for(i = 0 ; i < n ; i++ )
     {
        cin>>arr[i];
     }
    sum(arr , n);
     N-- ;
 }
 return 0 ;
}