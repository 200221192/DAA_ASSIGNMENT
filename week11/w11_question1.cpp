#include<iostream>
#define size 30 
using namespace std;

int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int min = INT_MAX;
	int count;
	for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k) + MatrixChainOrder(p, k + 1, j) + p[i - 1] * p[k] * p[j];
		if (count < min)
			min = count;
	}
	return min;
}

int main()
{
	int n;
    cin>>n;
    int arr[size];
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
	cout << "Minimum number of multiplications is " << MatrixChainOrder(arr, 1, n);
}