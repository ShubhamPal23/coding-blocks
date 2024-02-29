#include<iostream>
using namespace std;
int oddeven(int n)
{
    if(n==0) return 0;
    if(n%2!=0)
    {
        cout<<n<<endl;
        int sub1=oddeven(n-1);
    }
    if(n%2==0)
    {
        int sub2=oddeven(n-1);
        cout<<n<<endl;
    }
    return 0;
}
int main()
{
    int n; cin>>n;
    oddeven(n);
}