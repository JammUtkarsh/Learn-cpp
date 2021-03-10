#include<iostream>

using namespace std;

int main()
{
	int n,r;
	cout<<"Enter a number";
	cin>>n;
	cout<<endl;
	while(n>0)
	{
		r=n%10;
		cout<<r;
		n/=10;
	}
}
