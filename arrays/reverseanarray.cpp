#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++) cin>>ripper[i];
    for(int i=n-1;i>=0;i--)
    cout<<ripper[i]<<endl;
}