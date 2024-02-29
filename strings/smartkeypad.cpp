#include<iostream>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void smartkeypad(int pos, string &inp,string &op)
{
    if(pos==(int)inp.size())
    {
        cout<<op<<endl;
        return;
    }
    int dig=inp[pos]-'0';
    for(int i=0;i<(int)table[dig].size();i++)
    {
        char ch=table[dig][i];
        op.push_back(ch);
        smartkeypad(pos+1,inp,op);
        op.pop_back();

    }

}
int main()
{
    string inp;
    cin>>inp;               //12
    string op;
    smartkeypad(0,inp,op);
    return 0;
}