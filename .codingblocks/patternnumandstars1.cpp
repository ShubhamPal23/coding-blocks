#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        if(i<n)
        {
            for(int j=1;j<=2*(n-i-1)+1;j++)
            {
                cout<<"*";
            }
        }
        cout<<endl;  
    }
    return 0;
}