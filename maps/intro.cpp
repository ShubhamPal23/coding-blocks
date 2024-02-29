#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;
int main()
{
    unordered_map<int,int> mp;

    mp[3]=35;
    cout<<mp.size()<<endl;

    mp[2]=10;
    mp[-10]=29;

    
    cout<<mp.size()<<endl;
    // cout<<mp[10]<<endl;

    // cout<<mp.size()<<endl;


    unordered_map<string,int> mp2;

    mp2["Ripper"]=18;

    unordered_map<int,vector<int>> mp4;

    mp4[3].push_back(10);
    mp4[3].push_back(11);

    // keys=3 , value={10,11}

    mp4[4].push_back(12);
    mp4[5].push_back(19);

    cout<<mp4.size()<<endl;
    cout<<"----------------"<<endl;
    // for(pair<int,int> p:mp)
    // {
    //     cout<<"key: "<<p.first<<endl;
    //     cout<<"value: "<<p.second<<endl;
    //     cout<<endl;
    // }

    // or make iterator

    unordered_map<int,int> :: iterator it = mp.begin();
    while(it!=mp.end())
    {
        cout<<it->first <<" " << it->second <<endl;
        it++;
    }
    cout<<mp.size();
    
}
