#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int num=1;

    if(N>0 && N<100)
    {
        int i=1;
        while(i<=N)
        {
            int j=1;
            while(j<=i)
            {
                cout<<num<<"\t";
                j+=1;
                num+=1;
            }

            cout<<endl;
            
            i+=1;
        }

    }
    return 0;
}