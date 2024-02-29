#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class solution
{
    void graph(unordered_map<int,list<int>>&mp,vector<pair<int,int>>&edges)
    {
        for(int i=0;i<edges.size();i++)
        {
            int n=edges[i].first;
            int e=edges[i].second;

            mp[n].push_back(e);
            mp[e].push_back(n);
        }
    }
    void bfs(unordered_map<int,list<int>>&mp,unordered_map<int,bool>&visited,vector<int>&ans,int node)
    {
        queue<int>q;
        q.push(node);
        visited [node]==true;
        while(!q.empty())
        {
            int frontnode=q.front();
            q.pop();

            ans.push_back(frontnode);

            for(auto i:mp[frontnode])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i]=1;
                }
                
            }
        }
    }
    public:
    vector<int> BFS(int vertex ,vector<pair<int,int>>edges)
    {
        unordered_map<int,list<int>>mp;
        vector<int>ans;
        unordered_map<int,bool>visited;
        graph(mp,edges);

        for(int i=0;i<vertex;i++)
        {
            if(visited[i]==false)
            {
                bfs(mp,visited,ans,i);
            }
        }
    }
};
int main()
{


    return 0;
}