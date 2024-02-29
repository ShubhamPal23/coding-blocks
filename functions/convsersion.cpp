#include<iostream>
using namespace std;
int main()
{
    int num,sb,db;
    cin>>sb>>db>>num;
    int ans = 0;
    int mult = 1;
    while(num != 0)
    {
        int rem = num % 10;
        ans  = ans + rem * mult;
        mult = mult * sb;
        num = num / 10;
    }

    mult = 1;
    num = ans;
    ans = 0;

    while(num != 0)
    {
        int rem = num % db;
        ans  = ans + rem * mult;
        mult = mult * 10;
        num = num / db;    
    }
    cout<<ans;
    return 0;  
}