#include<iostream>
#define max 30
// count sort 
// week 5 question 1 
using namespace std ;
int main(){

    char arr[max] ;
    int n , N ;
    cin>>N ; // total no of test case
    while(N>0){
        cout<<"\nenter the limit of the array:"<<endl;
        cin>>n;
        cout<<"\nEnter the elements:"<<endl;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            
        }
        cout<<"array is:"<<endl;
        for(int i = 0 ; i < n ; i++){
            cout<<arr[i]<<"\t";
        }
        int count[26]={0} ;
        for(int i = 0 ; i < n ; i++){
          count[arr[i]-'a']++ ;
        }
        int maxm = 0 , in;
         for(int i = 0 ; i < 26 ; i++){
            if(count[i]>maxm){
             maxm = count[i] ;
             in = i ;
            }
         }
         if(maxm > 1){
             cout<<endl;
             cout<<char('a'+in)<<":"<<maxm<<endl;
         }
         else{
             cout<<"\nNo Duplicate present"<<endl;
         }
         N--;
    }
}