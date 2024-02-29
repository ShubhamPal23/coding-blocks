#include<iostream>
using namespace std;
int main()
{
    int dividend , divisor;
    float quotient , remainder;
    cout<<"Enter dividend: ";
    cin>>dividend;
    cout<<"Enter divisor: ";
    cin>>divisor;

    quotient=dividend/divisor;
    remainder=dividend%divisor;

    cout<<"Quotient is: "<<quotient<<endl;
    cout<<"Remainder is: "<<remainder;
    return 0;
}