#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,dis,root1,root2;
    cin>>a>>b>>c;
    dis=b*b - 4*a*c;
    if(a>=-100 && a<=100 && b>=-100 && b<=100 && c>=-100 && c<=100)
    {
        if(dis> 0 )
        {
            root1=(-b + sqrt(dis))/(2*a);
            root2=(-b - sqrt(dis))/(2*a);
            if(root1<root2)
            {
                cout<<"Real and Distinct"<<endl<<root1<<" "<<root2;        
            }
            else
            {
                cout<<"Real and Distinct"<<endl<<root2<<" "<<root1;
            }   
        }   
        else if(dis==0)
        {
            root1= -b/(2*a);
            root2= -b/(2*a);
            if(root1<root2)
            {
                cout<<"Real and Equal"<<endl<<root1<<" "<<root2;
            }
            else
            {
                cout<<"Real and Equal"<<endl<<root2<<" "<<root1;
            }
        }
        else
        {
            cout<<"Imaginary";
        }
    }
}