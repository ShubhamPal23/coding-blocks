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
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        int x=ripper[i];
        if(x==target)
        {
            cout<<i<<endl;
            return 0;
        }
    }
        cout<<"-1"<<endl;
}