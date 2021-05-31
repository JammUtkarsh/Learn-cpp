#include<iostream>
using namespace std;

namespace first
{
	void fun()
	{
		cout<<"fun of first"<<endl;
	}
}

namespace second
{
	void fun()
	{
		cout<<"fun of second"<<endl;
	}
}

namespace run
{
	void fun()
	{
		cout<<"function of run";
	}
}

using namespace run;				// this must be declared after namespace 'name'

int main()
{
	first::fun();
	second::fun();
	fun();							// Using namespace enables to not write 'run::'

}