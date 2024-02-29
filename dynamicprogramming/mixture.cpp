// #include<bits/stdc++.h>
// using namespace std;
// int sum()
// {

// }
// int totalsmoke(vector<int> &a,int L , int R,vector<int> &prefix)
// {
//     if(L==R)
//     {
//         return 0;
//     }

//     int ans=INT_MAX;

//     for(int k=L;k<R;k++)
//     {
//         ans=min(ans, (sum(L,K,prefix)*sum(k+L,R,prefix)+totalsmoke(L,k,prefix)+totalsmoke(k+L,R,prefix)));
//     }
//     return ans;
// }
// int main()
// {
//     int n; cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++) cin>>a[i];
//     vector<int>prefix(n);
//     for(int i=0;i<n;i++)
//     {
//         prefix[i]=i-1
//     }
    
// }