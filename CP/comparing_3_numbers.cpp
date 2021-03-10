#include<iostream>

using namespace std;

int main()
{
	int x,y,z;

	cout<<"Enter 3 numbers\n";
	cin>>x>>y>>z;
	cout<<"\n";

	if (x<y && x<z)
	{
		cout<<x<<" is the smallest number";
	}
	else if(y<x && y<z)
		{
			cout<<y<<" is the smallest number";
		}
		else if(z<x && z<y)
			{
				cout<<z<<" is the smallest number";
			}
	cout<<"\n";
	if(x>y && x>z)
	{
		cout<<x<<" is the largest number";
	}
	else if(y>x && y>z)
		{
			cout<<y<<" is the largest number";
		}
		else if(z>x && z>y)
			{
				cout<<z<<" is the largest number";
			}
	return 0;
}
