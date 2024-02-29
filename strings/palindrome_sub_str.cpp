#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string ripper,sub_str;
    int count=0;
    cin>>ripper;
    for(int i=0;i<ripper.size();i++)
    {
        sub_str=ripper[i];
        for(int j=i+1;j<ripper.size();j++)
        {
            sub_str+=ripper[j];
            string k=sub_str;
            reverse(k.begin(),k.end());
            if(k==sub_str && j!=i)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0; 
}