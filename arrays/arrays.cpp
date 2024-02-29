//arrays are contiguous block of memory of same data type.
#include<iostream>
using namespace std;
int main()
{
    float arr[100];
    arr[1]=2.1;
    int n;
    cin>>n;
    //cout<<arr[1];
    //return 0;

    //int n;S
    //cin>>n;
    //int A[n];               //jugaad tarika , chal jata h c++ mein. doesnt give compilation error but shouldnt do this. 
    //int *A=new int[n];      //real method, use this in interview.
    int *ripper=new int[n];   //int ripper[n] will also work.
    int i=0;
    while(i<n)
    {
        cin>>ripper[i];
        i++;
    }
    int j=n-1;
    while(j>=0)
    {
        cout<<ripper[j]<<"\t";
        j--;
    }


}