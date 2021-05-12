#include<iostream>

using namespace std;

int add(int x, int y, int z=0)
{
	return x+y+z;
}

int main()
{
	cout<<add(10,12)<<endl;
	cout<<add(11,23,45)<<endl;
	return 0;
}
/*
Using default argument values.
*/
