#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=2*n-1)
    {
        cout<<"*";
        i+=1;
    }
    cout<<endl;

    i=1;
    while(i<n-1)
    {
        int j=i;
        while(j<=n-1)
        {
            cout<<"*";
            j+=1;
        }
        int p=1;
        while(p<=2*i-1)
        {
            cout<<" ";
            p+=1;
        }
        int k=i;
        while(k<=n-1)
        {
            cout<<"*";
            k+=1;
        }
        cout<<endl;
        i+=1;
    }
    {
        int i=1;
        while(i<n)
        {
            int j=1;
            while(j<=i)
            {
                cout<<"*";
                j+=1;
            }
            int p=1;
            while(p<=n+2-2*(i-1))
            {
                cout<<" ";
                p+=1;
            }
            int k=1;
            while(k<=i)
            {
                cout<<"*";
                k+=1;
            }
            cout<<endl;
            i+=1;
        }
    }
    i=1;
    while(i<=2*n-1)
    {
        cout<<"*";
        i+=1;
    }
    cout<<endl;

    return 0;
}