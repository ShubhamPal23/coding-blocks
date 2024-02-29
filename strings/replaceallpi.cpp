#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    string ripper,pi;
    pi="3.14";
    for(int i=0;i<n;i++)
    {
        cin>>ripper;
        int y=100;
        for(int j=0;j<y-1;)
        {
            y=ripper.size();
            if(ripper.substr(j,2)=="pi")
            {
                ripper.replace(j,2,pi);
                j=j+4;
            }
            else j++;
        }
        cout<<ripper<<endl;
    }
    return 0;
}