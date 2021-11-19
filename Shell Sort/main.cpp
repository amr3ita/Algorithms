#include <bits/stdc++.h>
using namespace std;
void ShellSort(int arr[],int n)
{
    int gap=n/2;
    while(gap!=0)
    {
        for(int i=gap; i<n; i++)
        {
            int value=arr[i];
            int j=i-gap;
            while(j>=0&&arr[j]>value)
            {
                arr[j+gap]=arr[j];
                j-=gap;
            }
            arr[j+gap]=value;
        }
        gap/=2;
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
    ShellSort(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
