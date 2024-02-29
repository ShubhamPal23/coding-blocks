#include<iostream>
using namespace std;
int main()
{
    int t,x,mini,minimum,a,b,c,d;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        int count=0;
        int n;
        cin>>n;
        int ripper[n];
        for(int j=0;j<n;j++)
        {
            cin>>ripper[j];
        }
        int money;
        cin>>money;
        for(int k=0;k<n;k++)
        {
            x=ripper[k];
            for(int j=k;j<n;j++)
            {
                int sum;
                sum=x+ripper[j];
                if(sum==money && j!=k)
                {
                    count++;
                    if(count==1)
                    {
                        mini=abs(x-ripper[j]);
                        a=x;
                        b=ripper[j];                       
                    }
                    else if(count>1)
                    {
                        minimum=abs(x-ripper[j]);
                        c=x;
                        d=ripper[j]; 
                    }
                }
                else continue;
            }
        }
        if(mini<=minimum || count==1)
        cout<<"Deepak should buy roses whose prices are "<<min(a,b)<<" and "<<max(a,b)<<"."<<endl;
        else if(minimum<=mini)
        cout<<"Deepak should buy roses whose prices are "<<min(c,d)<<" and "<<max(c,d)<<"."<<endl;
    }
}