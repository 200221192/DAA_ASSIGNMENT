// question 2 week1
#include<iostream>
using namespace std ;
void binary_search(int arr[] , int l , int r , int n , int key )
{
  int no_comparision = 0 , flag = 0 ;
  while(l <= r)
  {
      no_comparision++ ;
      int mid = (l+r)/2;
      if(key == arr[mid]){
          cout<<"present"<<" "<<no_comparision<<endl;
          flag = 1 ;
          break ;
      }
      else if(key > arr[mid]){
          l = mid+1 ;
      }
      else{
          r = mid-1 ;
      }   
  }
  if(flag == 0 ){
      cout<<"not present"<<" "<<no_comparision<<endl;
  }
}
int main()
{
int i , j , n , N  ,  key ;
 cin>>N;
 while(N>0)
 {
     cin>>n;
     int arr[n]  ;
     printf("enter the elements\n");
     for(i = 0 ; i < n ; i++ )
     {
         cin>>arr[i];
     }
     cout<<"enter the key"<<endl;
     cin>>key;
     binary_search( arr , 0 , n-1 , n , key);
     N-- ;
 }
 return 0 ;
}