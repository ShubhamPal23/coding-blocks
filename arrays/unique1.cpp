#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int ans=0;
    cin>>n;
    int ripper[n];
    for(i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    for(i=0;i<n;i++)
    {
        ans=ans^ripper[i];
        
    }
    cout<<ans;  
    
}