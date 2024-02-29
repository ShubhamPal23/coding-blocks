#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string y=s;
    reverse(s.begin(),s.end());
    if(y==s) cout<<"true";
    else cout<<"false";
    return 0;
}