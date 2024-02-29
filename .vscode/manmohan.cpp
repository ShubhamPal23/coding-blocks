#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;    
    
    if(N>0 && N<100)
    {
        cout<<1<<endl;
        int i=2;
        while(i<=N)
        {
            cout<<i<<"\t";
            int j=1;
            while(j<=i-2)
            {
                cout<<0<<"\t";
                j+=1;
            }
            cout<<i<<endl;
            i+=1;
        }
    }

    return 0;
    
}