#include<iostream>

using namespace std;

int max(int x, int y)
{
	return x>y ? x:y ; // out of x and y, if x>y then
}

int min(int x, int y)
{
	return x<y ? x:y ;
}
int main()
{
	int (*fun_p)(int, int); 		//initilization of pointer for a funcation with argument data type int int.
	fun_p = max;					// pointer is now pointing to a function
	cout<<(*fun_p) (10,5)<<endl;	// passing the values in the pointer to process it in function and get the result.
	fun_p = min;
	cout<<(*fun_p) (10,5)<<endl;
	return 0;
}