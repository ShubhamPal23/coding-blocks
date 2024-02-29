// "" , "a" , "b" ," c", "ab", "ac" ,"bc" ,"abc"
#include<iostream>
#include<cmath>
using namespace std;
void subsequence(string ripper, string output)
{
    if(ripper.empty())
    {
        cout<<output<<endl;
        return;
    }
    
    subsequence(ripper.substr(1), output + ripper[0]); //include
    subsequence(ripper.substr(1), output);   //exclude
    
    return;
    
}
int main()
{
    string ripper; 
    cin>>ripper;    //"abc"
    int n=ripper.size();
    subsequence(ripper,"");
    return 0;
}