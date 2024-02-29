#include<iostream>
#include<cmath>
using namespace std;
int arr[]={2,3,5,7,11,13,17,19,23,29};
int main()
{
    int n;
    cin>>n;
    string ripper,sub_str;
    int z=0;
    int ans=0;
    cin>>ripper;
    for(int i=0;i<n;i++)
    {
        sub_str="";
        
        for(int x=i;x<n;x++)
        {
            sub_str+=ripper[x];
            int y=sub_str.size();
            long long int k=0;
            for(int j=0;j<y;j++)
            {
                k+=(sub_str[j]-'0')*(pow(10,(y-1-j)));
            }
            int count=0;
            int p=0;
            while(k%arr[p]!=0 || count!=10)
            {
                count++;
                p++;
            }
            if(count==10 && k>z)
            {  
                z=k;
                ans++;
            }
        }    
    }
    cout<<ans;
    return 0;
}

//i=2
//4*100+9*10+9*1=499
