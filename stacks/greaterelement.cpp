#include<bits/stdc++.h>
using namespace std;
int greaterelement(int index , int *arr , int n , int k)
{

    if(index<n)
    {
        if(arr[index]<arr[index+1])
        {
            cout<<arr[index+1]<<" ";
            //index++;
        }
        else
        {
            cout<<"-1 ";
            //index++;
        }
    }
    else if(index==n)
    {
        if(arr[index]<arr[k])
        {
            cout<<arr[k]<<" ";
        }
        else cout<<"-1 ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        greaterelement(i,arr,n,1);
    }
    
}