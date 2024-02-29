#include<iostream>
using namespace std;
int main()
{
    int n;
    int pass=0;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    cin>>ripper[i];
    
    for(int j=0;j<n;j++)
    {
        int min=ripper[j];
        int x=ripper[j];
        int idx=0;
        for(int k=j;k<n;k++)
        {
            if(min>=ripper[k])
            {
                min=ripper[k];
                idx=k;
            }
        }
        if(x!=j+1)
        {
            swap(ripper[j],ripper[idx]);
            pass++;
        }       
    }
    cout<<pass;
}