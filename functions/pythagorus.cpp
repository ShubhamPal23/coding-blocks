#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    cout<<((n/2)*(n/2)) -1<<" "<<((n/2)*(n/2))+1;
    
    else if (n%2==1)
    cout<<(((n*n)-1)/2)<<" "<<(((n*n)+1)/2);

    else if(n<=2)
    cout<<"-1";

    return 0;
    
}