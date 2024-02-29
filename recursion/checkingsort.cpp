#include<iostream>
using namespace std;
int checksort(int i,int n,int *A)
{
    if(i==n-1)
    {
        return true;
    }

    
    if(A[i]<=A[i+1])
    {
        return checksort(i+1,n,A);    
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];

}