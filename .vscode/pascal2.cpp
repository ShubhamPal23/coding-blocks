#include<iostream>
using namespace std;
int pascal(int n, int k);
void printpascal(int n)
{
    int i=1;
    while(i<=n)
    {
        int j=0;
        while(j<=i)
        {
            cout<<pascal(i,j);
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
int pascal(int n, int k)
{
    int p=1;
    if(k>n-k)
    k=n-k;
    int i=0;
    while(i<k)
    {
        p*=(n-1);
        p/=(i+1);
        i+=1;
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    if(n>0 && n<100)
    {
        printpascal(n);
    }
    return 0;
}
