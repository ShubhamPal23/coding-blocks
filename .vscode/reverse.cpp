#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rn;
    cout<<"Enter a number: ";
    cin>>n;

    while(n!=0)
    {
        int rem = n%10;
        rev=rev*10 + rem;
        n/=10;
        
    }
    cout<<"reversed number: "<<rev<<endl;

    if (n==rev)
    {
        cout<<"reverse of the given number is equal";
    }

    else
    {
        cout<<"reverse of the given number is not equal";
    }
    
    return 0;
    
}