#include<iostream>
using namespace std;

class complex_no
{
    int real;
    int img;

    public:
    complex_no(int R , int I)
    {
        real =R;
        img=I;
        
    }
    void setImg(int IMG)
    {
        img=IMG;
    }

    int getImg()
    {
        cout<<"img: "<<img<<endl;
        return img;
    }
    void print(int x)
    {
        cout<<"img: "<<img<<endl;
    }
    void print(string x)
    {
        cout<<"real: "<<real<<endl;
    }
    void print()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};
complex_no operator+(complex_no &C1, complex_no &C2)
{
    complex_no ans;

}
int main()
{
    complex_no C1(3,4);
    C1.print();
    C1.print("abc");
    C1.print(3);

    complex_no C2(4,5);

    complex_no C4 = C1 + C2;
    cout<<"printing C4: ";
    C4.print();
}