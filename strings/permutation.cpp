//"abc" = "abc" , "acb" , "bac" , "bca" , "cab" , "cba"
#include<iostream>
using namespace std;
void permutations(string &ripper,int i,int &count)
{
    if(i==ripper.size())
    {
        cout<<ripper<<endl;
        count++;
        return ;
    }
    // if(ripper.empty())
    // {
    //     cout<<output<<" ";
    //     return;
    // }
    for(int j=i;j<ripper.size();j++)
    {
        swap(ripper[i],ripper[j]);                      //abc,
        permutations(ripper,i+1,count);
        swap(ripper[i],ripper[j]);
        
    }
}
int main()
{
    string ripper; cin>>ripper;
    int count=0;

    permutations(ripper,0,count);
    cout<<"count: "<<count<<endl;
    
    return 0;
}
