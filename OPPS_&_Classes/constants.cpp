#include <iostream>
using namespace std;

class demo
{
	int a = 10;
	void display() const
	{
		// a++;							the function cannot modify the variable 
	}
};

int main()
{
	const int var1 = 100;
	// var1++							the variable cannot be changed as it is a constant;
	const int *ptr = &var1;
	// ++*ptr;							the variable cannot be changed as it is a constant; even with a pointer

	int var2 = 200;
	int *const ptr2 = &var2;
	int var3 = 300;
	// ptr2 = &var3;					The pointer is locked to var2 so it cannot be chnaged so the address can not be changed.

	const int *const ptr3 = &var3; // Neither value not the address can be changed; Will throw error if lines below are executed.

	// ++*ptr3;
	// ptr3 = &var1;
}