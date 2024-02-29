#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        int b=0;
        int k=0;
        while(x!=0)
        {
            int a=x%10;
            b=b+a*(pow(2,k));
            k+=1;
            x/=10;
        }
        cout<<b;
        cout<<endl;
    }
    return 0;
}