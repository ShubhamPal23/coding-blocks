#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number of rows: ";
    cin>>n;

    for ( i =n; i>1; i--)
    {
        for (int space =0; space < n - i ; space++)
        cout<<"  ";
        for (int j=i; j<=2*i - 1; j++)
        cout<<"* ";
        for(int j = 0; j < i - 1; j++)
        cout<<"* ";
        
        
        cout<<endl;
           
    }
    
    for (i=1 ;i<=n;i++)
    {
        for (int space =0; space < n - i ; space++)
        cout<<"  ";
        for (int j=i; j<=2*i - 1; j++)
        cout<<"* ";
        for(int j = 0; j < i - 1; j++)
        cout<<"* ";
        
        
        cout<<endl;
    }

    return 0;
    
    

    

}