#include<iostream>
using namespace std;
int pow(int a,int b)
{
    if(b==0) return 1;
    int smallsub=pow(a,b-1);
    return a*smallsub;
}
int main()
{
    cout<<pow(5,12);
    return 0;
}