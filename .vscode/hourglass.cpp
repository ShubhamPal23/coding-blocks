#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    if(N<=20)
    {
        int i=N;
        while(i>=1)
        {
            int j=1;
            while(j<=N-i)
            {
                cout<<"  ";
                j+=1;
            }

            j=i;
            while(j>=0)
            {
                cout<<j<<" " ;
                j-=1;
            }

            j=1;
            while(j<=i)
            {
                cout<<j<<" " ;
                j+=1;
            }

            cout<<endl;

            
            
            i-=1;
        }

        i=0;
        while(i<=N)
        {
            int j=1;
            while(j<=N-i)
            {
                cout<<"  ";
                j+=1;
            }

            j=i;
            while(j>=0)
            {
                cout<<j<<" " ;
                j-=1;
            }

            j=1;
            while(j<=i)
            {
                cout<<j<<" " ;
                j+=1;
            }

            cout<<endl;
            i+=1;
        }
    }

    return 0;
}