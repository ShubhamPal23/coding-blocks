#include<iostream>
using namespace std;
int sumofdig(int n)
{
    if(n==0)
    return 0;
    int sub=sumofdig(n/10);
    return n%10+sub;
}
int main()
{
    cout<<sumofdig(12345);
}

//123