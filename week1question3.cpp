// question 3 week1
#include<iostream>
#include<math.h>
using namespace std ;
int  jump_search(int arr[] , int n , int key ){
    int i ,j ,k ;
    int no_comparison = 0 ;
    i = 0 ;
    j = sqrt(n);
    while(arr[j]<key && j<n){
        i = j ;
        j+=sqrt(n);
        no_comparison++ ;
        if(i>=n){
            return -1 ;
        }
    }
    for(k = i ; k <= j ; k++)
    {
        no_comparison++;
        if(arr[k]==key)
        {
            return no_comparison ;
        }
    }
    return -1 ;
}
int  main()
{
int i , n , N , key , temp  ;
cin>>N;
while(N>0)
 {
     cin>>n;
     int arr[n];
     printf("enter the elements\n");
     for(i = 0 ; i < n ; i++ )
     {
         cin>>arr[i];
     }
     cout<<"enter the key"<<endl;
     cin>>key;
     temp = jump_search(arr,n,key);
     if(temp == -1)
     {
         cout<<"not present"<<endl;
     }
     else
     {
         cout<<"present"<<" "<<temp-1<<endl;
     }
     N-- ;
 }
 return 0 ;
}