#include<iostream>
using namespace std;
int towerofhanoi(int n,char source_tower,char destination_tower,char auxillary_tower)
{
    if(n==0) return 0;
    towerofhanoi(n-1,source_tower,auxillary_tower,destination_tower);
    cout<<"Move "<<n<<"th "<<"disc from T"<<source_tower<<" to T"<<destination_tower<<endl;
    towerofhanoi(n-1,auxillary_tower,destination_tower,source_tower);
}
int steps(int n)
{
    if(n==0) return 0;
    return 2*steps(n-1) + 1;
}
int main()
{
    int n; cin>>n;
    towerofhanoi(n,'1','2','3');
    cout<<steps(n);
    return 0;
}