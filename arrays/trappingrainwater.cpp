#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    int right_side[n];
    int left_side[n];
    for(int i=0;i<n;i++)
    {
        int right=ripper[i];
        for(int j=i;j<n;j++)
        {
            if(right<ripper[j])
            right=ripper[j];
        }
        right_side[i]=right;
    }
    for(int i=n-1;i>=0;i--)
    {
        int left=ripper[i];
        for(int j=i-1;j>=0;j--)
        {
            if(left<ripper[j])
            left=ripper[j];
        }
        left_side[i]=left;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum + min(right_side[i],left_side[i])-ripper[i];
    }
    cout<<(sum*2)<<endl;
    
    return 0;
}