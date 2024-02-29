#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    double digits[num];
    
    if(num>=1 && num<=12)
    {
        int i=1;
        while(i<=num)
        {
            cin>>digits[i];
            i+=1;
        }
        cout<<endl;
    }
    
    
    i=1;
    while(i<=num)
    {   
        if(digits[i]<=0 && digits[i]>=9)
        {
            cout<<digits[i];
        }
        i+=1;
    }
    return 0;
}