#include<iostream>
using namespace std;
int main()
{
    int n;
    char alphabet='A';
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<alphabet<<"\t";
        }
        alphabet++;
        cout<<endl;
    }   
    return 0;    
}