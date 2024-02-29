#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    if(N<=20)
    {
        int i=N;
        while(i>0)
        {
            int j=1;
            while(j<=i-1)
            {
                cout<<" ";
                j=j+1;
            }

            cout<<"*";

            j=1;
            while(j<=N-2)
            {
                if(i==1 or i==N)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }   

                j=j+1;
            }

            cout<<"*";
        
            i-=1;
            cout<<endl;
        }
    }

    return 0;
}