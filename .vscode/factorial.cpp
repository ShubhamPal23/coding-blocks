#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long long f= 1.0;
    cout<<"Enter the value whose factorial is to be calculated: ";
    cin>>n;  
    if (n<0)
    cout<<"Error";

    else
    {
        for (i=1; i <=n; i++)
        {
            f=f*i;
        }
            
        cout<<"Factorial of "<<n<<" is: "<<f<<endl;
        
        
    }

    return 0;
    
}