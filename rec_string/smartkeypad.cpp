#include<iostream>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void keypad(int pos, string &inp , string &op)
{
    if(pos==inp.size())
    {
        cout<<op<<endl;
        return;
    }

    int dig=inp[pos]-'0';
    for(int i=0;i<table[dig].size();i++)
    {
        char ch=table[dig][i];
        op.push_back(ch);
        keypad(pos+1,inp,op);
        op.pop_back();  //backtracking
    }

}
int main()
{
    string inp;
    cin>>inp;
    string op;
    keypad(0,inp,op);
}