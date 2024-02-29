#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    //fib(n)=fib(n-1) + fib(n-2)
    int small1=fib(n-1);
    int small2=fib(n-2);
    return small1+small2;
}

// 0 1 1 2 3 5 8 13
int main()
{
    cout<<fib(7);
}