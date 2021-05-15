#include <iostream>

using namespace std;

class rectangle
{
	int length;
	int breadth;

public:
	rectangle() // Default Constructor;
	{
		length = 0;
		breadth = 0;
	}

	rectangle(int L, int B) // Parameterized Constructor;
	{
		setLength(L);
		setBreadth(B);
	}

	rectangle(rectangle &rect) // Copy Constructor;
	{
		length = rect.length;
		breadth = rect.breadth;
	}

	void setLength(int l)
	{
		if(l<0)
			length = 1;
		else
			length = l;
	}

	void setBreadth(int b)
	{
		if(b<0)
			breadth = 1;
		else
			breadth = b;
	}

	int getLength(int L)
	{
		return length;
	}

	int getBreadth(int L)
	{
		return breadth;
	}

	int area()
	{
		return length * breadth;
	}
	int perimeter()
	{
		return 2 * (length + breadth);
	}
};

int main()
{
	rectangle r1(10, 5); //Parameterized Constructor must be called like this.
	// r1(10,5);		 // Parameterized Constructor cannot be called like this.
	rectangle r2(r1);    // Making a copy of r1 in r2 using copy constructor.

	cout << r1.area() << endl;
	cout << r1.perimeter() << endl;
	cout<<endl;
	cout << r2.area() << endl;
	cout << r2.perimeter() << endl;
	return 0;
}