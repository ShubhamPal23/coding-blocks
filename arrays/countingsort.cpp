#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++) cin>>ripper[i];
    int frequency[1000001]={0};
    for(int i=0;i<n;i++)
    {
        int x=ripper[i];
        frequency[x]++;
    }
    for(int j=0;j<1000001;j++)
    {
        if(frequency[j]>0)
        {
            for(int k=0;k<frequency[j];k++)
            cout<<j<<" ";
        }
    }
    return 0;
}