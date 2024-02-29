#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int y=n;
    long long int temp=n;
    long long int count=0;
    while(y!=0)
    {
        y/=10;
        count++;
    }
    int ripper[count];
    for(int i=count-1;i>=0;i--)
    {
        ripper[i]=temp%10;
        temp/=10;
    }
    for(int j=0;j<count;j++)
    {
        int x=ripper[j];
        int y=9-x;
        if(j==0 && x==9)
        {
            cout<<x;
        }
        else if((9-x)<x)
        {
            cout<<y;
        }
        else
        {
            cout<<x;
        }
    }
}