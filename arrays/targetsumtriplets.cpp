#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int minimum;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    sort(ripper, ripper+n);
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        int x=ripper[i];
        for(int j=i;j<n;j++)
        {
            int y=ripper[j];
            for(int k=j;k<n;k++)
            {
                int z=0;
                if(x+y+ripper[k]==target && i!=j && i!=k && j!=k)
                {
                    int z=x+y+ripper[k];
                    if(x>y && x>ripper[k])
                    {
                        cout<<min(y,ripper[k])<<", "<<max(y,ripper[k])<<" and "<<x<<endl;
                    }
                    if(y>x && y>ripper[k])
                    {
                        cout<<min(x,ripper[k])<<", "<<max(x,ripper[k])<<" and "<<y<<endl;                
                    }
                    if(ripper[k]>x && ripper[k]>y)
                    {
                        cout<<min(x,y)<<", "<<max(x,y)<<" and "<<ripper[k]<<endl;
                    } 
                    break;
                }   
                else continue;        
            }
            
        }
    }
    return 0;
}