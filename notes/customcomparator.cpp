// sort an array on the basis of sum of its digits.

// ex : - {9,14,15,21}

// after sort : {21,14,15,9}

//yadi comparator true return krta h, this means a will come before b in sorted order
#include<bits/stdc++.h>
using namespace std;
int sumofdigit(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}
bool compare(int a,int b )
{
    // if(a<b) return true;
    // else return false;
    int sumA=sumofdigit(a) , sumB=sumofdigit(b);
    if(sumA<sumB) return true;
    else return false;
}
int main()
{
    vector<int>A={10,12,18,21,8,9,11};
    sort(A.begin(),A.end(),compare);
    for(int x:A) cout<<x<<" ";
    return 0;
}