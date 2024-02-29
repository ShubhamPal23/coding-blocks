#include<iostream>
using namespace std;
int main()
{
    long long int n,a;
    long long int b=0;
    long long int ans=0;
    long long int i=1;
    cin>>n;
    if(n>0 && n<=1000000000)
    {   
        while(n!=0)
        {
            a=n%10;
            n/=10;
            b=b+a*i;
            i*=8;
        }
        int k=1;
        while(b!=0)
        {
            long long int c=b%2;
            ans=ans+c*k;
            k*=10;
            b/=2; 
        }
        cout<<ans;
    }
    return 0;
}