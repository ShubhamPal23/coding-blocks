#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=0;
    int b=1;
    int sum=0;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        sum=a+b;
        b=a;
        a=sum;
    }
        cout<<sum;
    
    return 0;
}