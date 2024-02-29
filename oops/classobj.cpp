#include<iostream>
#include<cstring>
using namespace std;
class Car
{
    public:
    char *name;
    int mileage;
    int seats;
    int price;

    Car()
    {
        name=NULL;
        cout<<"Creating an Object"<<endl; //default constructor
    }

    Car(char* n,int p , int s , int m)
    {
        cout<<"Inside parameterized constructor"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        seats=s;
        mileage=m;
    }

    Car(Car &X)
    {
        cout<<"Inside Copy Constructor"<<endl;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        mileage=X.mileage;
        seats=X.seats;
    }

    void print()
    {
        cout<<name<<endl;
        cout<<mileage<<endl;
        cout<<seats<<endl;
        cout<<price<<endl;
        cout<<endl;
    }

    void operator=(Car X)
    {
        cout<<"Inside copy assignment operator"<<endl;
        if(name!=NULL)
        {
            delete[] name;
            name = NULL;
        }
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        mileage=X.mileage;
        seats=X.seats;
    }

    void operator +=(Car &X)
    {
        char *oldname=name;
        name= new char[strlen(name)+strlen(X.name)+1];
        strcpy(name, oldname);
        strcat(name, X.name);
        delete[] oldname;

        price+=X.price;
        seats+=X.seats;
        mileage+=X.mileage;
    }

    

    void changename(char *n)
    {
        if(name!=NULL)
        {
            delete[] name;
            name = NULL;
        }
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }
    ~Car()
    {
        cout<<"Deleting Car: "<<name<<endl;
        delete[] name;
    }
};
ostream& operator<<(ostream& os , Car A)
{
    cout<<"Inside overloading cout"<<endl;
    cout<<"Name   : "<<A.name<<endl;
    cout<<"Mileage: "<<A.mileage<<endl;
    cout<<"Seats  : "<<A.seats<<endl;
    cout<<"Price  : "<<A.price<<endl;
    return os;
}

int main()
{
    Car A;
    // strcpy(A.name,"BMW");
    A.changename("BMW");
    A.mileage=10;
    A.price=100;
    A.seats=2;

    Car B("Audi",1000,5,15);
    // strcpy(B.name,"Audi");
    // B.price=200;
    // B.seats=5;
    // B.mileage=11;
    Car C= B; // copy constructor

    Car D(C);
    //D.name[0]='B';

    Car E;
    E=D;
    E.name[0]='B';

    E+=A;

    cout<<A<<endl<<B<<endl<<C<<endl<<D<<endl<<E<<endl;

    // A.print();
    // B.print();
    // C.print();
    // D.print();
    // E.print();
    return 0;
}