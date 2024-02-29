#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    if(N>0 && N<10 && N%2==1)
    {
        int i=1;
        while(i<=(N)/2)
        {
            int k=0;
            while(k<(N+1)/2 - (i))
            {
                cout<<"\t";
                k+=1;
            }

            int j=1;
            while(j<=2*i-1)
            {
                cout<<"*\t";
                j+=1;
            }
            cout<<endl;
            i+=1;
        }
        
        
        i=(N+1)/2;
        while(i>=1)
        {
            int k=0;
            while(k<(N+1)/2 - (i))
            {
                cout<<"\t";
                k+=1;
            }

            int j=1;
            while(j<=2*i-1)
            {
                cout<<"*\t";
                j+=1;
            }
            cout<<endl;
            i-=1;
        }
    }
    return 0;
}