#include<bits/stdc++.h>
using namespace std;
vector<string> keypad = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string searchIn [] = {"kartik", "sneha", "deepak", "arnav", "shikha", "palak", "utkarsh", "divyam", "vidhi", "sparsh", "akku" };
void smartkeypad2(int pos , string &inp , string &op)
{
    if(pos==inp.size())
    {
        for(int j = 0;j<11;j++)
        {
            if(searchIn[j].find(op)!=-1)
            {
                cout<<searchIn[j]<<endl;
            }
        }
        return;
    }
    int dig= inp[pos]-'0';
    for(int i=0;i<keypad[dig].size();i++)
    {
        char ch= keypad[dig][i];
        op.push_back(ch);
        smartkeypad2(pos+1 , inp , op);
        op.pop_back();
    }
}      
int main()
{
    string inp;
    cin>>inp;
    string op;
    smartkeypad2(0,inp,op);

    return 0;
}