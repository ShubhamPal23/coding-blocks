#include<iostream>
using namespace std;
void sortedarray(int n , int *ripper)
{
    if(n==0)
    {
        cout<<"true";
        return ;
    }
    if(ripper[n]>=ripper[n-1])
    {
        sortedarray(n-1, ripper);
    }
    else
    {
        cout<<"false";
        return;
    }
}
int main()
{
    int n; cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++) cin>>ripper[i];

    sortedarray(n,ripper);
    return 0;
}