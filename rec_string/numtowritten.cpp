#include<iostream>
using namespace std;

string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void dig(string ripper,string output)
{
    if(ripper.empty())
    {
        cout<<output;
        return;
    }
    int digit=ripper[0] - '0';

    dig(ripper.substr(1),output+arr[digit]);
}
int main()
{
    string ripper; cin>>ripper;
    dig(ripper,"");
    return 0;
    
}