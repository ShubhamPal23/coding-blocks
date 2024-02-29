#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int sum=0;
    cin>>n;
    int ripper[n];
    for(i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ripper[i];
    }
    for(i=0;i<n;i++)
    {
        int ans=0;
        int x=ripper[i];
        for(j=0;j<n;j++)
        {
            if(x==ripper[j])
            {
                ans+=1;
            }
        }
        if(ans==3)
        {
            sum=sum-x;
        }
    }
    cout<<sum;
    return 0;
}