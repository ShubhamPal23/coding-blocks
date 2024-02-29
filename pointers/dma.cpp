#include<iostream>
using namespace std;
int* createarray(int n)
{
    int *a=new int[n];
    int num=1;
    for(int i=0;i<n;i++)
    {
        a[i]=num;
        num+=2;
    }

    return a;
}
int main()
{

    int n;
    cin>>n;
    int *arr=createarray(n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // int n;
    // cin>>n;

    // int *a=new int[n];
    // for(int i=0;i<n;i++)
    // {
    //     a[i]=i+1;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    // delete[] a;

    // a=NULL;
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    return 0;
}