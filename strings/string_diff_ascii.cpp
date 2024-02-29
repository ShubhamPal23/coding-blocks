#include<iostream>
using namespace std;
int main()
{
    string ripper;
    cin>>ripper;
    cout<<ripper[0];
    for(int i=0;i<ripper.size()-1;i++)
    {
        int y=ripper[i];
        int k=ripper[i+1];
        //int z=int(k)-int(y);
        int z= ripper[i+1]-ripper[i];

        cout<<z<<ripper[i+1];
        
    }
    
    return 0;
}


