#include<iostream>

using namespace std;

int main()
{
	int x[3];

	cout<<"Enter 3 numbers\n";
	cin>>x[0]>>x[1]>>x[2];
	cout<<"\n";
	
	if(x[0]<x[1] && x[0]<<x[2])
	{
		cout<<x[0]<<" is the smallest\n";
		if(x[1]<x[2])
		{
			cout<<x[2]<<" is the largest\n";
		}
		else
		{
			cout<<x[1]<<" is the largest\n";
		}

	}
	else
	{
		cout<<x[0]<<" is the largest\n";
		if(x[1]<x[2])
		{
			cout<<x[1]<<" is the smallest\n";
		}
		else
		{
			cout<<x[2]<<" is the smallest\n";
		}
	}
	
	return 0;
}
