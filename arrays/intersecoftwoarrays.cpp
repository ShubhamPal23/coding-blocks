#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int u=0;
    cin>>n;
    int ripper[n], ripper_2[n];
    for(int i=0;i<n;i++) cin>>ripper[i];
    for(int i=0;i<n;i++) cin>>ripper_2[i];
    sort(ripper,ripper+n);
    sort(ripper_2,ripper_2+n);
    cout<<"[";
    for(int i=0;i<n;)
    {
        int count=0;
        int count_2=0;
        int x=ripper[i];
        for(int j=0;j<n;j++)
        {
            if(x==ripper[j] )
            count++;
        }
        for(int k=0;k<n;k++)
        {
            if(x==ripper_2[k])
            count_2++;
        }
        if(count>=1 && count_2>=1)
        {
            if(u>=1)
            cout<<", ";
            u++;
            int y=min(count,count_2);
            for(int p=0;p<y;p++)
            {
                cout<<x;
                if(y>=1 && p<y-1)
                cout<<", ";  
            }  
        }
        i+=count;      
    }
    cout<<"]"; 
}
