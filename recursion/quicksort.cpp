#include<iostream>
using namespace std;
void quicksort(int *ripper,int s , int e)
{
    if(s>=e)
    {
        return ;   
    }

    int idx=s;
    int pivot=ripper[e];

    for(int j=s;j<=e-1;j++)
    {
        if(ripper[j]<=pivot)
        {
            swap(ripper[j],ripper[idx]);
            idx++;
        }
    }

    swap(ripper[idx],ripper[e]);

    quicksort(ripper,s,idx-1);
    quicksort(ripper,idx+1,e);
}
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    quicksort(ripper,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<ripper[i]<<" ";
    }
    cout<<endl;
    return 0;
}