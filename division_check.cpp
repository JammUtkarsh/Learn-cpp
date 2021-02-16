#include<iostream>

using namespace std;

int main()
{
	int a,b,c;

	cout<<"Enter numerator \n";
	cin>>a;
	cout<<"\nEnter denominator\n";
	cin>>b;

	if(b==0)
	{
		cout<<"Division not possible";
	}
	else
	{
		c=a/b;
		cout<<c;
	}
	return 0;	
}
