#include<iostream>
using namespace std;
int trianglerecursion(int n)
{
    if(n==1)
    return 1;
    int sub=trianglerecursion(n-1);
    return n + sub;
}
int main()
{
    int n; cin>>n;
    cout<<trianglerecursion(n);
}