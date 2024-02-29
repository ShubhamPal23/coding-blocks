#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    int test=n;
    int temp=n;
    int a=0;
    while(n!=0)
    {
        int sum=n%10;
        a=a+sum;
        n/=10;
    }
    int x=a;
    int p=0;
    while(test%2==0)
    {
        p=p+2;
        test/=2;
    }
    int q=0;
    int s=0;
    for(int i=3;i<=temp;i=i+2)
    {
        while(test%i==0)
        {
            q=q+i;
            test/=i;
            while(q!=0)
            {
                s=s+q%10;
                q/=10;
            }
        }
    }
    r=p+s;
    if(r==x) cout<<"1";
    else cout<<"0";
    return 0;
}