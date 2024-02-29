#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; int max=0;
        int min=0;
        cin>>x;
        int ripper[x];
        for(int j=0;j<x;j++) cin>>ripper[j];
        sort(ripper,ripper+x);
        for(int i=0;i<x/2;i++)
        {
            int k=abs(ripper[(x-1)-i]-ripper[i]);
            max+=k;
        }
        for(int i=0;i<x;i=i+2)
        {
            int p=abs(ripper[i+1]-ripper[i]);
            min+=p;
        }
        cout<<min<<" "<<max<<endl;
    }
}