//abc
//"","a","ab","abc","ac","b","bc","c"
//abcd
//"","a","ab","abc","abcd","ac","acd","ad","b","bc","bcd","bd","c","cd","d"
#include<iostream>
#include<algorithm>
using namespace std;
void lexicographic(string input , string output)
{
    if(input.empty())
    {
        return;
    }

    string t=input;
    output=input[0];
    cout<<output<<endl;

    for(int j=1;j<=input.size()-1;j++)
    {
        output=input[0];
        
        for(int k=j;k<input.size();k++)
        {
            output+=input.substr(k,1);
            cout<<output<<endl;
        }    
    }
    lexicographic(input.substr(1),"");
    return ;
}

int main()
{
    string input;
    int n;
    cin>>n;
    string output="";
    sort(input.begin(),input.end());
    for(int i=0;i<n;i++)
    {
        cin>>input;
        cout<<output<<endl;
        lexicographic(input,output);
    }

    
    return 0;  
}