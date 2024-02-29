#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    int k;
    cin>>k;
    int max=ripper[0];
    for(int j=0;j<k;j++)
    {
        if(max<=ripper[j])
        {
            max=ripper[j];
        }
    }
    cout<<max<<endl;
}