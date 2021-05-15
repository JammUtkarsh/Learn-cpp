#include<iostream>

using namespace std;

class addition
{
	public:
	int var1, var2;
	void add()
	{
		cout<< var1+ var2<<endl;
	}

};
int main()
{
	addition task1;
	addition *ptr;

	ptr = &task1; // Normal pointer declaration
	ptr ->var1 = 5;	// assigning value of varX in class using pointer.
	ptr ->var2 = 5;
	ptr -> add();

	addition *ptr2 = new addition(); // Pointer in heap addition() -(can also be written as) -> addition;
	ptr2 ->var1 = 500;
	ptr2 ->var2 = 489;
	ptr2 ->add();
	
	return 0;
}