#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    if(N>2 && N<=1000000000)
    {
        int i=2;
        while(i<=N/2)
        {
            if(N%i==0)
            {
                cout<<"Not Prime";
                break;
            }            
            i++;
        }
        
        if(N%i!=0)
        {
            cout<<"Prime";
        }
        
    }
    return 0;
}