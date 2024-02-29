//vectors
//vectors are by default not passed by reference

//vector<datatype>A;

//ex: vector<int>A;  -> vector of unts
//ex: vector<float>B;

//2-D vectors

//vector<vector<int>A;

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&A)
{
    cout<<"size of vector: "<<A.size()<<endl;
    cout<<"capacity of vector: "<<A.capacity()<<endl;
    cout<<endl;
}
int main()
{
    // vector<int>A;
    // print(A);
    // int x; cin>>x;
    // while(x!=-1)
    // {
    //     A.push_back(x);

    //     print(A);
    //     cin>>x;
    // }
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    print(v);
    cout<<v.size()<<endl;

    vector<int>A{1,2,3,5,6};
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}