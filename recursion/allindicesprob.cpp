#include<iostream>
using namespace std;
void indices(int n , int *ripper, int m)
{
    if(n<0)
    {
        return ;
    }
    indices(n-1,ripper,m);
    if(ripper[n]==m)
    {
        cout<<n<<" ";
    }
    return ;
}
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++) cin>>ripper[i];
    int m;
    cin>>m;
    indices(n,ripper,m);
    return 0;
}