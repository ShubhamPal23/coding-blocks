#include<iostream>
using namespace std;
int main()
{
    string ripper,sub_str,ans;
    cin>>ripper;
    int count=0;
    for(int i=0;i<ripper.size();i++)
    {
        if(ripper[i]=='a' || ripper[i]=='e' || ripper[i]=='i' || ripper[i]=='o' || ripper[i]=='u')
        {
            sub_str+=ripper[i];
            int y=sub_str.size();
            if(y>count)
            {
                count=y;
                y=0;
                ans=sub_str;
            }
        }
        else 
        sub_str.clear();
    }
    int y=ans.size();
    cout<<y;
    return 0;
}