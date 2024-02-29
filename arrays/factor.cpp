#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    cin>>ripper[i];
    int frequency[101]={0};
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x=ripper[i];
        frequency[x]++;
    }
    for(int i=0;i<=101;i++)
    {
        cout<<frequency[i];
    }
}
