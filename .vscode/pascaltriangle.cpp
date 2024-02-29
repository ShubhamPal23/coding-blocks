#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    
        int i=1;
        while(i<=n)
        {
            int val=1;     
            int m=1;
            while(m<=i)
            {
                cout<<val<<"\t";
                val=val*(i-m)/(m);
                m+=1;
            }
            cout<<endl;
            i+=1;            
        }
    
    return 0;
}