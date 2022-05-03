// week 3 question1 
#include<iostream>
using namespace std ;
#define max 50
// insertion sort
void insertionsort(int a[] , int n , int shift ,int cmp){
int temp , i , j ;
for( i = 1; i< n ; i++)
    {
            temp  = a[i] ;
            j = i-1 ;
            while(j >= 0 && a[j] > temp )
            {
                cmp++ ;
                a[j+1] = a[j];
                shift++ ;
                j-- ;
            }
            a[j+1] = temp ;
            shift++ ;
    }
    cout<<"sorted array:"<<endl;
    for( int i = 0 ; i < n ; i++ )
    {
        cout<<a[i]<<"\t";
    }
    cout<<"comparison ="<<cmp<<endl;
    cout<<"shift ="<<shift<<endl;
}
int main()
{
    int a[max],n ,i = 0 ;
    int N;
    cin>>N;
    while(N>0)
    {
    int  shift = 0 , cmp = 0  ;
    cout<<"enter limit"<<endl;
    cin>>n;
    for( i = 0 ; i < n ; i++ )
    {
        cin>>a[i];
    }
    insertionsort(a ,n , shift ,cmp);
    N-- ;
    }
    return 0 ;

}
