#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++) cin>>ripper[i];
    // for(int i=1;i<n;i++)
    // {
    //     int x=ripper[i];
    //     int j=i-1;
    //     while(j>=0 && ripper[j]>x)
    //     {
    //         ripper[j+1]=ripper[j];
    //         j--;
    //     }
    //     ripper[j+1]=x;
    // }
    for(int i=1;i<n;i++)
    {
        int key=ripper[i];
        int j=i-1;
        while(ripper[j]>key && j>=0)
        {
            ripper[j+1]=ripper[j];
            j--;
        }
        ripper[j+1]=key;
    }
    for(int i=0;i<n;i++) cout<<ripper[i]<<" ";
}