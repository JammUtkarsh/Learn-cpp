#include<iostream>
using namespace std;

class parent
{
	public:
	void fun()
	{
		cout<<"fun of parent"<<endl;
	}
	virtual void fun2()
	{
		cout<<"fun2 of parent"<<endl;
	}
};
class child : public parent
{
	public:
	void fun()  // Function overrided with parent fun;
	{
		cout<<"fun of child"<<endl;
	}
	void fun2()
	{
		cout<<"fun2 of child"<<endl;
	}
};

int main()
{
	child c;
	c.fun();
	
	parent* p= new child();      // Pointer to heap creater ; pointer of parent class created an object of child class.
	p->fun();					// function will be called of base class;
	c.fun2();
	parent* p2= new child();
	p->fun2();					// function of child will be called;
	return 0;
}
