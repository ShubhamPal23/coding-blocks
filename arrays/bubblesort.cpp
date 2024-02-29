#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++) cin>>ripper[i];
    for(int i=0;i<n-1;i++)
    {
        int count=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(ripper[j]>=ripper[j+1])
            {
                swap(ripper[j],ripper[j+1]);
                count++;
            }
        }
        if(count==0)
        {
            break;
        }
    }

    for(int i=0;i<n;i++)
    cout<<ripper[i]<<endl;
}
