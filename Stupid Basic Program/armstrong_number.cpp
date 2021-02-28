#include<iostream>

using namespace std;

int main()
{
	int n,m,r,sum=0;
	cout<<"Enter a number ";
	cin>>n;
	r=n;
	while(n>0)
	{
		m=n%10;
		sum+=(m*m*m);
		n/=10;
	}
	if(sum==r)
		cout<<"It is an armstrong number";
	else
		cout<<"It is not an armstrong number";
	return 0;
}
