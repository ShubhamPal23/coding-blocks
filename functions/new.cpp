#include<iostream>
using namespace std;




int main()
{
    int square=areaofSquare(5);
    cout<<"square is: "<<square<<endl;
    
    int rectangle = areaofRectangle(6,4);
    cout<<"Rectangle is: "<<rectangle<<endl;

    printVipin(5);

    return 0;
}

int areaofRectangle(int length, int breadth)
{
    
    return length*breadth;
}
int areaofSquare(int side)
{
    int area= side * side;
    return area;
}


void printVipin(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<"Vipin"<<endl;
    }
    
}