#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    if(n>-1000 && n<1000)
    {
        while((sum+n)>=0)
        {
            sum+=n;
            cout<<n<<endl;
            cin>>n;
        }
    }
    return 0;
}