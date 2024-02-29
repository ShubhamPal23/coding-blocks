#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>ripper;
    int maxu=0;
    for(int i=0;i<arr.size();i++)
    {
        ripper[arr[i]]++;
        maxu=max(maxu,ripper[arr[i]]);
    }
    int sol;
    for(int i =0;i<arr.size();i++)
    {
        if(maxu==ripper[arr[i]])
        {
            sol=arr[i];
            break;
        }
    }
    cout<<sol;
    return 0;

}