#include<iostream>
using namespace std;
int main()
{
    int n;
    int z=0;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    for(int i=0;i<n;i++)
    {
        int x=ripper[i];
        int y=1;
        for(int j=0;j<n;j++)
        {
            if(x==ripper[j] && i==j)
            {
                continue;
            }
            else
            {
                y=y*ripper[j];
            }
            
        }
        cout<<y<<" ";
    }
    return 0;
}