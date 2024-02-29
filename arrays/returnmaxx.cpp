#include<iostream>
using namespace std;
int main()
{
    int n,y;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    int query;
    cin>>query;
    int A[n];
    int maxy=ripper[0];
    for(int i=0;i<n;i++)
    {
        if(maxy<ripper[i])
        {
            maxy=ripper[i];
        }
        A[i]=maxy;
    }
    for(int i=0;i<query;i++)
    {
        int index; cin>>index;
        cout<<A[index];
        
    }
}