//question 1 week 1
#include<iostream>
using namespace std ;
void linear_search(int arr[] , int n , int key)
{
  int flag=0, no_comparison = 0 ;
  for(int i = 0  ; i < n ; i++ )
  {
      no_comparison++ ;
      if(arr[i]==key)
      {
         cout<<"present"<<" "<<i+1<<endl;
          flag = 1 ;
          break ;
      }
  }
  if(flag == 0)
  {
      cout<<"Not present"<<" "<<no_comparison;
  }
}
int main()
{
 int i , j , n , N , key ;
 cin>>N;
 while(N>0)
 {
     cin>>n;
     int arr[n];
     //printf("enter the elements\n");
     for(i = 0 ; i < n ; i++ )
     {
         cin>>arr[i];
     }
     //printf("enter the key:\n");
     cin>>key;
     linear_search(arr , n , key);
     N-- ;
 }
 return 0 ;
}