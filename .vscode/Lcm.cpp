#include<iostream>
using namespace std;
int main()
{
    int N1,N2,hcf,lcm,i;
    cin>>N1>>N2;
    if(N1>0 && N1<1000000000 && N2>0 && N2<1000000000)
    {
        if (N2>N1)
    {
        int large=N2;
        N2=N1;
        N1=large;
    }

    for (i=1;i<=N2; i++)
    {
        if (N1%i==0 && N2%i==0)
        {
            hcf=i;
        }
           
    }

    cout<<hcf<<endl;
    return 0;
    }
}