#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    

    node(int d)
    {
        data=d;
    }

    ~node()
    {
        cout<<"destructor is called"<<endl;
    }


};

int main()
{
    node *ptr=new node(10);
    delete (ptr);
    return 0;
}