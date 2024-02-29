#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1,n2,num,test;
    cin>>n1>>n2;
        for(int i=n1;i<=n2;i++)
        {
            num=i;
            int x=0;
            while(num!=0)
            {
                x++;
                num/=10;
            }
            num =i;
            int y=0;
            while(num!=0)
            {   
                test=num%10;
                y=y+pow(test,x);
                num/=10;
            }
            if(i==y) cout<<i<<" ";
        }
    
    return 0;
}