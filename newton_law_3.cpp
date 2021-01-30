#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int s,x,u,a;
	float v;
	cout<<"\nEnter inital velocity\n";
	cin>>u;
	cout<<"\nEnter distance traveled\n";
	cin>>s;
	cout<<"\nEnter acclearation\n";
	cin>>a;
	x = (u*u) + (2*a*s);
	v = pow(x,0.5);
	cout<<"\nThe displacement is "<<v;
	return 0;
}
