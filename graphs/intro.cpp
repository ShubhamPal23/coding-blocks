#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class solution
{
    public :
    void graph(unordered_map<int,list<int>>&mp , int node , int edge , int dir)
    {
        mp[node].push_back(edge);
        if(dir==0)
        {
            mp[edge].push_back(node);
        }
    }
    void print(unordered_map<int,list<int>>&mp)
    {
        for(auto i:mp)
        {
            cout<<i.first<< "-> ";
            for(auto j : i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    unordered_map<int,list<int>>mp;
    int n;
    cout<<"Enter no. of nodes: "<<endl;
    cin>>n;
    int e;
    cout<<"Enter no. of edges:"<<endl;
    cin>>e;
    solution s;
    for(int i=0;i<e;i++)
    {
        int node , edge;
        cin>>node>>edge;
        s.graph(mp,node,edge,0);
    }

    s.print(mp);
}