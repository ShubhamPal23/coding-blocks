#include<iostream>
using namespace std;
int main()
{
    string ripper;
    cin>>ripper;
    for(int i=0;i<ripper.size();i++)
    {
        if(i==0 || i%2==0)
        {
            ripper[i]=ripper[i]+1;
        }
        else if(i%2!=0)
        {
            ripper[i]=ripper[i]-1;
        }
        cout<<ripper[i];
    }
    return 0;
}