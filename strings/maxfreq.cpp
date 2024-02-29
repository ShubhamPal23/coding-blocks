#include<iostream>
using namespace std;
//int main()
// {
//     string ripper,freq_string;
//     int y=0;
//     cin>>ripper;
//     for(int i=0;i<ripper.size();i++)
//     {
//         int count=0;
//         for(int j=i;j<ripper.size();j++)
//         {
//             if(ripper[i]==ripper[j])
//             {
//                 count++;
//             }
//             else break;
//         }
//         if(count>=y)
//         {
//             y=count;
//             freq_string=ripper[i];
//         }
//     }
//     cout<<freq_string;
//     return 0;    
// } 
int main()
{
    string word;
    cin>>word;
    int j;
    int max_freq=0;
    string highest;
    int freq[26]={0};
    for(int i=0;i<word.size();i++)
    {
        if(word[i]>='a'  && word[i]<='z')
        j=word[i]-'a';
        else if(word[i]>='A' && word[i]<='Z')
        j=word[i]-'A';
        
        freq[j]++;
        if(freq[j]>max_freq)
        {
           max_freq=freq[j]; 
           highest=word[i];
           
        }
    }
    cout<<highest;
    return 0;
}