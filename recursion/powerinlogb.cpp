//trying to solve it in time complexity logb.
#include<iostream>
using namespace std;
int powlog(int a, int b)
{
    if(b==0) return 1;

    int sub=powlog(a,b/2);
    
    if(b&1) return a*sub*sub;
    
    else return sub*sub;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<powlog(a,b);
    return 0;
}