#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int mn=i,j;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[mn])
            {
                mn=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[mn];
        arr[mn]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    SelectionSort(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
