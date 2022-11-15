#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the value of rows : ";
	cin>>n;
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=2*n-i;j++)
		{
			cout<<"* ";
		}
		
		cout<<endl;
		
		for(int k=1;k<=i;k++)
		{
			cout<<"  "; //2 spaces
		}
		
		
	} 
	
	return 0;
}
