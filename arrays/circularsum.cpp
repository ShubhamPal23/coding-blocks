#include<iostream>
using namespace std;
int main()
{
    int test,n;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>n;
        int ripper[n];
        for(int j=0;j<n;j++) cin>>ripper[j];

        int sum=0;
        for(int k=0;k<n;k++) sum+=ripper[k];
        
        int cur_max=ripper[0], max_sum=ripper[0],cur_min=ripper[0],min_sum=ripper[0];
        
        for(int i=1;i<n;i++)
        {
            cur_max=max(cur_max+ripper[i],ripper[i]);
            max_sum=max(max_sum,cur_max);

            cur_min=min(cur_min+ripper[i],ripper[i]);
            min_sum=min(min_sum,cur_min);
        }
        if(min_sum==sum) cout<<max_sum<<endl;

        else cout<<max(max_sum,sum-min_sum)<<endl;
    }
    return 0;
}