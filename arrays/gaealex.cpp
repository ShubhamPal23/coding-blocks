#include<iostream>
using namespace std;
int main()
{
    int n,i,q;
    int alexmoney,k;
    cin>>n;
    int ripper[n];
    for(i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        int sum=0;
        cin>>alexmoney>>k;
        for(int j=0;j<n;j++)
        {
            if(alexmoney%ripper[j]==0)
            {
                sum++;
            }
        }
        if(sum>=k)
        {
            cout<<"Yes"<<endl;
        }   
        else cout<<"No"<<endl;
    }
    return 0;
}