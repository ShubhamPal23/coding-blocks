#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int A[n];
	int i;
	int m;
	int j;
	int num;
	int num1;
	int num2=1000;
	int k;
	for(i=0;i<n;i++)
	{
		cin>>m;
		int B[m];
		
		
		for(j=0;j<m;j++)
		{
			cin>>B[j];
		}
		for(j=0;j<m-1;j++)
		{
			for(k=j+1;k<m;k++)
			{
				if(B[j]>B[k])
				{
					int temp;
					temp=B[k];
					B[k]=B[j];
					B[j]=temp;
				}
			}
		}
		
		int target_money;
		cin>>target_money;
		for(j=0;j<m;j++)
		{
			int temp=B[j];
			for(int p=j+1;p<m;p++)
			{
				if(temp+B[p]==target_money && B[p]-temp<=num2)
				{
					num2=B[p]-temp;
					num=temp;
					num1=B[p];
				}
				
			}
			
		}
		cout<<num<<" "<<num1<<endl;			
	}
	return 0;
}