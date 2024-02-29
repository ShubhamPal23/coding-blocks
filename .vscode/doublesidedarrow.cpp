#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    if(N%2==1)
    {
        int i=1;
        while(i<=(N+1)/2)
        {
            int j=1;
            while(j<=N+1-2*i)
            {
                cout<<"  ";
                j+=1;
            }
            int k=i;
            while(k>=1)
            {
                cout<<k<<" ";
                k-=1;
            }

            int l=1;
            while(l<2*(i-1))
            {
                cout<<"  ";
                l+=1;
            }
            if(i>1)
            {
                int m=1;
                while(m<=i)
                {
                    cout<<m<<" ";
                    m+=1;
                }
                
            }
            cout<<endl;
            i+=1;    
        }
        
        i=(N-1)/2;
        while(i>=1)
        {
            int j=1;
            while(j<=N+1-2*i)
                {
                    cout<<"  ";
                    j+=1;
                }
                int k=i;
                while(k>=1)
                {   
                    cout<<k<<" ";
                    k-=1;
                }

                int l=1;
                while(l<2*(i-1))
                {
                    cout<<"  ";
                    l+=1;
                }
                if(i>1)
                {
                    int m=1;
                    while(m<=i)
                    {
                        cout<<m<<" ";
                        m+=1;
                    }   
                
                }
            cout<<endl;
            i-=1;
        }
    }

    return 0;
}