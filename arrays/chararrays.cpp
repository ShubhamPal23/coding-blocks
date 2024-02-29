#include<iostream>
using namespace std;
int main()
{
    char A[10];
    A[0]='3';
    A[1]='#';
    A[2]='x';

    cout<<A[0]<<endl;
    cout<<A[1]<<endl;
    cout<<A[2]<<endl;

    cout<<&A[0]<<endl;
    A[3]='\0';
    cout<<&A[0]<<endl;
    cout<<A<<endl;
    cout<<(int*)&A[0]<<endl;

    int *ptr1;
    char *ptr2;

    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(ptr2)<<endl;
}