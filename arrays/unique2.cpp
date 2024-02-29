#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,x;
    int ans=0;
    cin>>n;
    int ripper[n];
    for(i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    sort(ripper,ripper+n);
    for(i=0;i<n;)
    {
        if(ripper[i]==ripper[i+1])
        {
            i+=2;
        }
        else if(ripper[i]!=ripper[i+1])
        {
            x=ripper[i];
            ans+=x;
            i+=1;
        }
    } 
    cout<<min(x,ans-x)<<" "<<max(x,ans-x);
    return 0;  
}