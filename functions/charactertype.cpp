#include<iostream>
using namespace std;
int main()
{
    char var;
    cin>>var;
    if(var>='A' && var<='Z')
    cout<<"U";
    else if (var>='a' && var<='z')
    cout<<"L";
    else cout<<"I";
    return 0;  
}