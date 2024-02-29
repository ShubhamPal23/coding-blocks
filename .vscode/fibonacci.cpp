#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=1;
    int y=0;
    int sum=0;
    cin>>n;

    if(n>0 && n<100)
    {
        int i=0;
        while(i<n)
        {
            int j=0;
            while(j<=i)
            {
                cout<<sum<<"\t";
                sum=x+y;
                x=y;
                y=sum;
                j+=1;
            }
            cout<<endl;
            i+=1;
        }
    }
    return 0;
}
