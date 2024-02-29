#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    
    int i=N;
    while(i>=1)
    {
        int j=N;
        while(j>=i)
        {
            cout<<j<<" ";
            j-=1;
        }
        int k=1;
        while(k<=2*i-1)
        {
            cout<<"  ";
            k+=1;
        }

        int l=i;
        while(l<=N)
        {
            cout<<l<<" ";
            l+=1;
        }
        cout<<endl;
        i-=1;
    }

    i=N;
    while(i>=0)
    {
        cout<<i<<" ";
        i-=1;
    }
    i=1;
    while(i<=N)
    {
        cout<<i<<" ";
        i+=1;
    }
    cout<<endl;

    i=1;
    while(i<=N)
    {
        int j=N;
        while(j>=i)
        {
            cout<<j<<" ";
            j-=1;
        }
        int k=1;
        while(k<=2*i-1)
        {
            cout<<"  ";
            k+=1;
        }

        int l=i;
        while(l<=N)
        {
            cout<<l<<" ";
            l+=1;
        }
        cout<<endl;
        i+=1;
    }


    return 0;
}