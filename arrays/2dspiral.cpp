#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ripper[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>ripper[i][j];
    }
    int first_row=0, first_column=0, last_row=n-1, last_column=m-1;
    while(first_row<=last_row && first_column<=last_column)
    {
        for(int i=first_row;i<=last_row;i++) cout<<ripper[i][first_column]<<", ";
        first_column++;

        for(int i=first_column;i<=last_column;i++) cout<<ripper[last_row][i]<<", ";
        last_row--;

        if(last_column>=first_column)
        {
            for(int i=last_row;i>=first_row;i--) cout<<ripper[i][last_column]<<", ";
            last_column--;
        }

        if(last_row>=first_row)
        {
            for(int i=last_column;i>=first_column;i--) cout<<ripper[first_row][i]<<", ";
            first_row++;
        }
    }
    cout<<"END";
    return 0;
}