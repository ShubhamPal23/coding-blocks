#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N>0 && N<10)
    {
        int i=1;
        while(i<=N)
        {   
            int j=1;
            while(j<=N-i)
            {
                cout<<"  ";
                j+=1;
            }

            int k=i;
            while(k<=2*i-1)
            {
                cout<<k<<" ";
                k+=1;
            }

            int p=2*(i-1);
            while(p>=i)
            {

                cout<<p<<" ";
                p=p-1;
                
            }

            cout<<endl;
            i++;
        }
    }

    return 0;
}