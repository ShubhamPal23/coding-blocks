#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;

    if(x>=1 && x<=10000 && y>=1 && y<=10000)
    {
        int i=1;
        while(i<=y/x)
        {
            cout<<x*i<<endl;
            i+=1;
        }
    }

    return 0;
}