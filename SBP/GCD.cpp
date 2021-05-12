#include<iostream>

using namespace std;

int main()
{
	int m,n;
	cout<<"Enter two number "; // Greatest common divisor.
	cin>>n>>m;

	while(m!=n)
	{
		if(m>n)
			m=m-n;
		else if(n>m)
			n=n-m;
	}
	cout<<"\nThe GCD of the input numbers are "<<n;
}
