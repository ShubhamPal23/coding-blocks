#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int b=1;
    cin>>n;
    if(n>0 && n<1000000000)
    {
        int sum=0;
        while(n!=0)
        {
            int a=n%10;
            sum=sum+b*(pow(10,a-1));
            n/=10;
            b+=1;    
        }
        cout<<sum;
        
    } 
    return 0;  
}