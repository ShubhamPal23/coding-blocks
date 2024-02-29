#include<iostream>
using namespace std;
void merge(int l, int r, int *A)
{
    int C[r-l+1];
    int pos=0;
    int mid=(l+r)/2;
    int i=l,j=mid+1;

    while(i<=mid && j<=r)
    {
        if(A[i]<=A[j])
        {
            C[pos]=A[i];
            i++; pos++;
            // C[pos++]=A[i++]
        }
        else
        { 
            C[pos]=A[j];
            j++; pos++;
            //C[pos++]=A[j++]
        }
    }
    while(i<=mid) C[pos++]=A[i++];
    while(j<=r) C[pos++]=A[j++];

    pos=0;
    for(int k=l;k<=r;k++) A[k]=C[pos++];

}

void mergesort(int l, int r, int *A)
{
    if(l>=r) return;
    int mid=(l+r)/2;
    mergesort(l,mid,A);
    mergesort(mid+1,r,A);
    merge(l,r,A);
}

int main()
{
    int j; cin>>j;
    int A[j];
    for(int i=0;i<j;i++) cin>>A[i];

    int n= sizeof(A)/sizeof(int);

    mergesort(0,n-1,A);
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    cout<<endl;

    return 0;
}