#include<iostream>

using namespace std;
typedef int marks;

int main()
{
	marks m1,m2,m3,m4,m5;
	int avg;
	cout<<"Enter your marks\n";
	cin>>m1>>m2>>m3>>m4>>m5;
	avg = (m1+m2+m3+m4+m5)/5;
	cout<<"The average of your marks are "<<avg;
	return 0;
}
