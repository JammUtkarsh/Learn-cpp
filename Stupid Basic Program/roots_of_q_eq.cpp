#include<iostream>1

using namespace std;

int main()
{
	int x,y,a,b,c;

	cout<<"\nEnter coefficient a\n";
	cin>>a;
	cout<<"\nEnter coefficient b\n";
	cin>>b;
	b=-b;
	cout<<"\nEnter coefficient c\n";
	cin>>c;

	x = (-b + sqrt((b*b) - (4*a*c)))/(2*a);

	y = (-b - sqrt((b*b) - (4*a*c)))/(2*a);

	cout<<"\nThe first root is "<<x<<"\n";
	cout<<"\nThe second root is "<<y<<"\n";
	return 0;

}

