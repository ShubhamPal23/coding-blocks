#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==1 && n>0 && n<10)
    {
        int i=1;
        while(i<=n)
        {
            cout<<"*\t";
            i+=1;
        }
        cout<<endl;

        i=1;
        while(i<=n/2 - 1)
        {
            int j=i;
            while(j<=n/2)
            {
                cout<<"*\t";
                j+=1;
            }
            int k=1;
            while(k<=2*i-1)
            {
                cout<<"\t";
                k+=1;
            }
            int p=i;
            while(p<=n/2)
            {
                cout<<"*\t";
                p+=1;
            }
            cout<<endl;
            i+=1;
        }
        {
            int i=1;
            while(i<=(n-1)/2)
            {
                int j=1;
                while(j<=i)
                {
                    cout<<"*\t";
                    j+=1;
                }
                int k=1;
                while(k<=n-2*i)
                {
                    cout<<"\t";
                    k+=1;
                }
                int p=1;
                while(p<=i)
                {
                    cout<<"*\t";
                    p+=1;
                }
                cout<<endl;
                i+=1;
            }
            i=1;
            while(i<=n)
            {
                cout<<"*\t";
                i+=1;
            }
        }
    }
    return 0;
}