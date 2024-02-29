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
    int query;
    cin>>query;
    int sum_of_array[n];
    
    int y=0;
    for(int i=0;i<n;i++)
    {
        int sum=ripper[i];
        y+=sum;
        sum_of_array[i]=y;
    }
    for(int i=0;i<query;i++)
    {
        int index;
        cin>>index;
        cout<<sum_of_array[index];
    }
    
}