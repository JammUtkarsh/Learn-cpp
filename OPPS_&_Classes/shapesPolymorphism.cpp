#include <iostream>
using namespace std;

class shape
{
public:
	virtual float area() = 0;
	virtual float perimeter() = 0;
};

class rectangle : public shape
{

private:
	int length;
	int breadth;

public:
	rectangle(int l = 1, int b = 1)
	{
		length = l;
		breadth = b;
	}
	float area()
	{
		return length * breadth;
	}
	float perimeter()
	{
		return (length + breadth) * 2;
	}
};

class circle : public shape
{
private:
	int radius;

public:
	circle(int r = 1)
	{
		radius = r;
	}
	float area()
	{
		return 3.14 * radius * radius;
	}
	float perimeter()
	{
		return 2 * radius * 3.14;
	}
};

int main()
{
	shape *p = new rectangle(10, 5);
	cout<<p->area()<<endl;
	cout<<p->perimeter()<<endl;
	
	shape *p2 = new circle(10);
	cout<<p2->area()<<endl;
	cout<<p2->perimeter()<<endl;
}