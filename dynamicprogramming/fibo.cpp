#include<iostream>
using namespace std;
// Bottom Up Approach -> recursive + memorisation
// int fibo(int n, int *dp)
// {
//     if(n==0) return 0;
//     else if (n==1) return 1;

//     if(dp[n]!=-1)
//     {
//         return dp[n];
//     }

//     dp[n]= fibo(n-1 , dp) + fibo(n-2 , dp);
//     return dp[n];

// }
// int main()
// {
//     int n;
//     cin>>n;
//     int dp[n+1];
//     for(int i=0;i<=n;i++)
//     {
//         dp[i]=-1;
//     }

//     cout<<fibo(n,dp)<<endl;
// }


// Top Down Approach ->Tabulation 
int main()
{
    // int n;
    // cin>>n;
    // int dp[n+1];
    // dp[0] ={0};
    // dp[1]={1};
    // for(int i=2;i<=n;i++)
    // {
    //     dp[i]=dp[i-1]+ dp[i-2];
    // }
    // cout<<dp[n]<<endl;

    // return 0;

    //Optimization 



    int n;
    int a=0;
    int b=1;
    int sum=0;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        sum=a+b;
        b=a;
        a=sum;
    }
        cout<<sum<<endl;;
    
    return 0;
}


