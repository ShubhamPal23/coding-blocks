#include<iostream>
using namespace std;
int main()
{
    int p,q,r,s,t;
    cin>>p>>q>>r>>s>>t;
    if(p>q && p>r && p>s && p>t)
    {
        cout<<p;
    }
    else if (q>p && q>r && q>s && q>t)
    {
        cout<<q;
    }
    else if(r>p && r>q && r>s && r>t)
    {
        cout<<r;
    }
    else if(s>p && s>q && s>r && s>t)
    {
        cout<<s;
    }
    else 
    cout<<t;
    
    return 0;
}