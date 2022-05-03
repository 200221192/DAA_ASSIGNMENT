// week 2 question 1
#include<iostream>
#define max 100
using namespace std;


void binary_search(int arr[], int l, int h,int key,int c)
{
    int m;
    if(l>h){
        if(c==0)
        cout<<"Key not present\n";
        return;
    }
    m = (h+l)/2;
    if(key==arr[m])
    {
        for(int i=m;i>=l;i--){
        if(arr[i]==key)
        c++;
        }
        for(int i=m+1;i<=h;i++){
        if(arr[i]==key)
        c++;
        } 
         cout<<key<<"-"<<c;
        return;
    }
    else if(key<arr[m])
    binary_search(arr,l,m-1,key,c);
    else
    binary_search(arr,m+1,h,key,c);
    
}

int main()
{
    int arr[max],n,key,c=0,t;
    cin>>t;
    while(t){
    t--;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>key;
    binary_search(arr,0,n-1,key,c);
    }
}