#include<iostream>
using namespace std;

int main()
{
	int i,j,a,b;
	cout<<"How many rows you wanna print : ";
	cin>>a;
	cout<<"How many columns you wanna print : ";
	cin>>b;
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	return 0;
}
