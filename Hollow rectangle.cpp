#include<iostream>
using namespace std;

int main()
{
	int i,j,a,b;
	cout<<"Enter the value of row : ";
	cin>>a;
	cout<<"Enter the value of column : ";
	cin>>b;

	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(i==1 || i==a || j==1 || j==b)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	return 0;
}
