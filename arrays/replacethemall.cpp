#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int y=n;
    int temp=n;
    int count=0;
    if(n==0)
    {
        cout<<"5";
        return 0;
    }
    while(y!=0)
    {
        count++;
        y/=10;
    }
    int ripper[count];
    for(int i=count-1;i>=0;i--)
    {
        ripper[i]=temp%10;
        temp/=10;
    }
    
    for(int j=0;j<count;j++)
    {
        int z=ripper[j];
        if(z==0)
        {
            cout<<"5";
        }
        else
        {
            cout<<z;
        }
    }
}