#include<iostream>
using namespace std;
int main()
{
    int a,b,i,hcf;
     cin>>a>>b;

    if (b>a)
    {
        int large=b;
        b=a;
        a=large;
    }

    for (i=1;i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
           
    }

    cout<<hcf;
    return 0;
    
}