#include<iostream>
using namespace std;
int main()
{
    long long int num,i;
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
    if(digits[i]>=0 && digits[i]<=9)
    {
        int i=0;
        while(i<num)
        {
            cout<<digits[num-i];
            i+=1;
        }
    }

    
    
    return 0;
}