#include<iostream>
using namespace std;
int main()
{
   long long int M;
   long long int N;
   long long int P;
   long long int Q;
   long long int R;
   cin>>M>>N>>P>>Q>>R;
   if(M>N && M>P)
   {
      if(M>Q && M>R)
      {
         cout<<M;
      }
   }
   else
   {
     if(N>P && N>Q )
     {
        if(N>R)
        {
           cout<<N;
        }
     } 
     else
     {
        if(P>Q && P>R)
        {
           cout<<P;
        }
        else
        {
           if(Q>R)
           {
              cout<<Q;
           }
           else
           {
              cout<<R;
           }
        }
     }
   } 
   
   return 0;
}