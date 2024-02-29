#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ripper[n];
    for(int i=0;i<n;i++)
    {
        cin>>ripper[i];
    }
    int sum=0;
    for(int j=0;j<n;j++)
    {
        sum=sum+ripper[j];
    }
    cout<<"sum is: "<<sum<<endl;


    int min=ripper[0];
    for(int k=0;k<n;k++)
    {
        if(min>ripper[k])
        {
            min=ripper[k];
        }
    }
    cout<<"min is: "<<min<<endl;

    
    int max =ripper[0];
    for(int j=0;j<n;j++)
    {
        if (max<ripper[j])
        {
            max=ripper[j];
        }
    }
    cout<<"max is: "<<max<<endl;
}