#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    for(int i=n1;i<=n2;i=i+n3)
    {
        cout<<i<<"\t";
        int j=i;
        while(j<=i)
        {
            cout<<((5)*(j-32))/9<<endl;           
            j+=n3;
        }
    }
    return 0;
}
