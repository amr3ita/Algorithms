#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++)
    {
        int value=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>value)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=value;
    }
}
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    InsertionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
