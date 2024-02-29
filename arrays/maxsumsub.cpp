#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int ripper[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++) cin>>ripper[i][j];
    }
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=ripper[i][j]+(j-1>=0?arr[i][j-1]:0);
        }
    }
    int ans=-1e9;
    for(int L=0;L<c;L++)
    {
        for(int R=L;R<c;R++)
        {
            int num=0;
            for(int i=0;i<r;i++)
            {
                int cur_num=arr[i][R]-(L-1>=0?arr[i][L-1]:0);
                num=max(num+cur_num,cur_num);
                ans=max(ans,num);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}