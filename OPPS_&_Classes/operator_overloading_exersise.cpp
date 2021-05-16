#include<iostream>
using namespace std;

class rational
{
	int numerator;
	int denomenator;
public:
	rational(int n=1, int d=1)
	{
		numerator = n;
		denomenator = d; 
	}
	rational operator+(rational x);
	friend ostream& operator<<(ostream& out, rational a);
};

ostream& operator<<(ostream& out, rational a)
{
	out << a.numerator << "/" << a.denomenator;
	return out;
}
rational rational :: operator+(rational x)
{
	rational temp;
	temp.numerator = (numerator * x.denomenator)  + (x.numerator * denomenator);
	temp.denomenator = (denomenator * x.denomenator);
	return temp;
}

int main()
{
	rational r1(1,6);
	rational r2(3,4);
	rational r3;
	r3 = r1 + r2;

	cout<<r3;

	return 0;

}