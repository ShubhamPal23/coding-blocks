#include<iostream>
using namespace std;
int main()
{
    int n;
    int k=0;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    for(int i=0;i<n;i++)
    {
        int x=ripper[i];
        if(x!=1)
        {
            int j=2;
            while(j<=x/2)
            {
                if(x%j==0 && x!=2 )
                {
                    break;
                }
                j++;
            }
            if(x%j!=0 || x==2)
            {
                k=k+ripper[i];
            }
        }
        
    }
    cout<<k;
    return 0;
}