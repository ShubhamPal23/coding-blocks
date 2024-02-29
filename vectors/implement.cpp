#include<iostream>
using namespace std;
class vector
{
    public: 
    int *arr;
    int cs;
    int ms;

    vector(int s=2)
    {
        cs=0;
        ms=s;
        arr = new int[ms];
    }
};