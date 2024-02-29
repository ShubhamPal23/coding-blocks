#include<iostream>
using namespace std;
//trying function 1st time in c++ hehe
int incrediblehulk(int n)
{
    int x=0;
    while(n>0)
    {
        x++;
        n = n&(n-1);
    }
    return x; 
}
int main()
{
    int t,n;
    cin>>t;   
    while(t--)
    {
        cin>>n;
        cout<<incrediblehulk(n)<<endl;       
    }    
	return 0;
}