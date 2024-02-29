#include<iostream>
using namespace std;
int main()
{
    string ripper;
    cin>>ripper;
    for(int i=0;i<ripper.size();i++)
    {
        if(ripper[i]>='A' && ripper[i]<='Z')
        {
            ripper[i]=ripper[i] + 'a' - 'A';
        }
        else if(ripper[i]>='a' && ripper[i]<='z')
        {
            ripper[i]=ripper[i] + 'A' - 'a';
        }
        
    }
    cout<<ripper;
    return 0;
}