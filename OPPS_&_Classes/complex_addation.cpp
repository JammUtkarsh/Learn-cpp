#include<iostream>
using namespace std;

class complex
{
	int real;
	int img;
public:
	complex(int r = 0, int i = 0)
	{
		real = r;
		img = i;
	}
	complex operator+(complex a);
	void display();

};
complex complex :: operator+(complex a)
{
	complex temp;
	temp.real = real + a.real;
	temp.img = img + a.img;
	return temp;
}
void complex :: display()
{
	cout<<real<<" +i "<<img<<endl;
}

int main()
{
	complex c1(10,5), c2(4,5), c3;
	c3 = c1 + c2;
	c3.display();
	return 0;
}