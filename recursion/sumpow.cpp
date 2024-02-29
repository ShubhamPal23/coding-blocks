#include<iostream>
#include<math.h>
using namespace std;
int sumpow(int n)
{
    if(n==0) return 0;
    int smaller=sumpow(n-1);
    return smaller + pow(n,5);
}
int main()
{
    cout<<sumpow(2);
}