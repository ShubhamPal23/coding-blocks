#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    if(0<N<10)
    {
        int i=1;
        while(i<N)
        {
            int j=1;
            while(j<=i)
            {
                cout<<j<<" ";
                j+=1;
            }

            j=0;
            while(j<=N+N-i-i-2)
            {
                cout<<"  ";
                j+=1;
            }                       //2(N-i)-1
            
            j=i;
            while(j>0)
            {
                cout<<j<<" ";
                j-=1;
            }
            cout<<endl;

            i+=1;
        }

        {
            i=1;
            while(i<=N)
            {
                cout<<i<<" ";
                i+=1;
            } 

            i=N-1;
            while(i>0)
            {
                cout<<i<<" ";
                i-=1;
            }
            cout<<endl;
        }
    }


    return 0;
}