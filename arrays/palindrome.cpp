#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    
    for(int i=0;i<n;i++)
    {
        int x=ripper[i];
        int y=0;
        while(x!=0)
        {
            int s=x%10;
            y=y*10+s;
            x/=10;
        }
        if(y==ripper[i] && ripper[i]>10)
        {
            sum=ripper[i];
            cout<<sum<<endl;
        }
    }
    return 0;
}