#include<iostream>
using namespace std;
int main()
{
    int n;
    int minimum;
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
        for(int j=i;j<n;++j)
        {
            if(i==j)
            {
                continue;
            }
            else if(x+ripper[j]==target)
            {
                cout<<min(x,ripper[j])<<" and "<<max(x,ripper[j])<<endl;
                break;
            }
        }
    }
    return 0;
}