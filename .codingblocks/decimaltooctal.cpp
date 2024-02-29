#include<iostream>
using namespace std;
int main()
{
    int n,a;
    int i=1;
    int b=0;
    cin>>n;
    if(n>0 && n<=1000000000)
    {
        for(;n!=0;)
        {
            a=n%8;
            n/=8;
            b=b+a *i;
            i*=10;
        }
        cout<<b;
    }
    return 0;
}