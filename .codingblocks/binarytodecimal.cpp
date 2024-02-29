#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int b=0;
    cin>>n;
    if(n>0 && n<=1000000000)
    {
        int i=0;
        while(n!=0)
        {
            int a=n%10;
            b=b+a*(pow(2,i));
            i+=1;
            n/=10;
        }
        cout<<b;
    }
    return 0;
}
