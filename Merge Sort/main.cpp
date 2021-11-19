#include <bits/stdc++.h>
using namespace std;
void Merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++) L[i]=a[l+i];
    for(int j=0; j<n2; j++) R[j]=a[mid+1+j];

    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }

}
//------------------->
void MergeSort(int arr[],int bg,int ed)
{
    if(bg>=ed)
        return;
    int m=bg+(ed-bg)/2;
    MergeSort(arr,bg,m);
    MergeSort(arr,m+1,ed);
    Merge(arr,bg,m,ed);
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

    MergeSort(a,0,n-1);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
