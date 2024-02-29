#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>A[i][j];
    }

    for(int j=0;j<m;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<n;i++)
            cout<<A[i][j]<<" ";
        }
        else 
        {
            for(int i=n-1;i>=0;i--)
            cout<<A[i][j]<<" ";
        }
    }
    return 0;
}