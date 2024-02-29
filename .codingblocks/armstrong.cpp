#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i=0;
    int a=0;
    cin>>n;
    int num=n;
    int test=n;
    
    if(n>0 && n<1000000000)
    {   
        while(test!=0)
        {
            test/=10;
            i+=1;
        }
        while(n!=0)
        {
            int sum=n%10;
            a=a+pow(sum,i);
            n/=10;    
        }  
    }
    if(a==num)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}