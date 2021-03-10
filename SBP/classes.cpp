#include<iostream>

using namespace std;

class rectangle
{
	public:
	int length;
	int breadth;

	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		int p=2*(length+breadth);
		return p;
	}
};

int main()
{
	rectangle r1, r2;


	r1.length = 50;
	r1.breadth = 19;
	r2.length = 34;
	r2.breadth = 13;
	cout<<r1.area()<<endl;
	cout<<r2.perimeter()<<endl;
	
	return 0;
}
