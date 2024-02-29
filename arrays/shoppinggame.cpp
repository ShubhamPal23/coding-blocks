#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int a,h;
    for(int i=1;i<=n;i++)
    {
        int ayush=-1;
        int harshit=0;
        int sum1=0;
        int sum2=0;
        cin>>a>>h;
        int minimum=min(a,h);
        int maximum=max(a,h);
        if(ayush+2<=a)
        while(sum1<=a)
        {
            ayush+=2;
            sum1+=ayush;
        
        }
        while(sum2<=h)
        {
            harshit+=2;
            sum2+=harshit;
        }
        if(sum1>sum2)
        cout<<"Aayush"<<endl;
        else cout<<"Harshit"<<endl;
    }
}