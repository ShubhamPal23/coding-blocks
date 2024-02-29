#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int sum=0;
    while(sum<=n)
    {
        sum=a+b;
        b=a;
        a=sum;
        if(n==sum)
        {
            cout<<"Yes";
            return 0;
        }
        else
        continue;
    }
    cout<<"No";
}