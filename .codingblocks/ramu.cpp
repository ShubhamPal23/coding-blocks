#include<iostream>
using namespace std;
void ramu()
{
    int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    int n,m;
    cin>>n>>m;
    int rick=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        int ridingseparatlyineachrickshaw=x*c1;
        int ridingunlimitedtimesinarickshaw=c2;
        rick+=min(ridingseparatlyineachrickshaw,ridingunlimitedtimesinarickshaw);
    }
    rick=min(rick,c3);
    int cab=0;
    for(int i=1;i<=m;i++)
    {
        int y;
        cin>>y;
        int ridingseparatlyoncab=y*c1;
        int ridingunlimitedtimesoncab=c2;
        cab+=min(ridingseparatlyoncab,ridingunlimitedtimesoncab);
    }
    cab=min(cab,c3);

    int totalcost=min(rick+cab,c4);
    cout<<totalcost<<endl;
}

int main()
{
    int k;
    cin>>k;
    for(int j=1;j<=k;j++)
    {
        ramu();
    }

    return 0;
}