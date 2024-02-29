#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    cin>>ripper[i];
    for(int j=0;j<n;j++)
    {
        int min=ripper[j];
        int x;
        for(int i=j;i<n;i++)
        {
            if(min>=ripper[i])
            {
                min=ripper[i];
                x=i;
            }
        }
        swap(ripper[j],ripper[x]);
    }
    for(int i=0;i<n;i++)
    cout<<ripper[i]<<endl;
}