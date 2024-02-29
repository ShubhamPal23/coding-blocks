// access modifiers
//-> public , private , protected
//-> attributes that are private cant be accessed from main whereas thta are public can be accessed from main.
#include<iostream>
using namespace std;

class car
{
    private:
    float discount;
    int price;
    string model;
    public:
    char col;
    car()  //constructor
    {
        model="BMW";
        price=9000000;
        discount=500;
    }
    car (string MODEL , float DISCOUNT, int PRICE,char COL)
    {
        model=MODEL;
        discount=DISCOUNT;
        price=PRICE;
        col=COL;
    }
    void print()
    {
        cout<<"model: "<<model<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"col: "<<col<<endl;
        cout<<endl;
    }
};

int main()
{
    car c;

    car C1("Audi",1000,8000000,'A');
    
    c.print();
    C1.print();
    C1=c;           //copy contructor
    C1.print();
    // c.price=600000;
    // c.model="BMW";
    // c.col='B';
    // cout<<sizeof(c)<<endl;
    // cout<<sizeof(car)<<endl;
    // int x;
    // cout<<sizeof(int)<<endl;
    // cout<<sizeof(x)<<endl;
    // cout<<sizeof(float)<<endl;
    // cout<<sizeof(char)<<endl;
    // cout<<sizeof(string)<<endl;


    return 0;
}