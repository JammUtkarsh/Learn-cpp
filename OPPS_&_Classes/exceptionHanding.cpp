#include<iostream>
using namespace std;

int division(int a, int b)
{
	if (b==0)
	{
		throw 1;
	}
	return a/b;
	
}
int main()
{
	int x, y, z;
	cin>>x>>y;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(int e)
	{
		cout<<"Divison by 0 not possible"<<endl;
	}
	
	return 0;
}