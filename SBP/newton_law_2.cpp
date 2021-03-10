#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int s,u,a,t;
	cout<<"\nEnter inital velocity\n";
	cin>>u;
	cout<<"\nEnter acclearation\n";
	cin>>a;
	cout<<"\nEnter time taken\n";
	cin>>t;
	s= u + a*t*t/2;
	cout<<"\nThe displacement is "<<s;
	return 0;
}
