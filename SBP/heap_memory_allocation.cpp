#include<iostream>
using namespace std;

int main()
{
	int* p = new int[5]; // declaring heap memory under the name  p and of size 5

	for (int i = 0; i < 5; i++)
	{
		p[i]=i; //initilizing heap memory
		cout<<p[i]<<endl;
	}
	delete []p; //Deleting allocated heap memory
	// p=nullptr; // to deallocate pointer.
	p = new int[10];
	cout<<endl;
	for (int i = 0; i < 10; i++)
	{
		p[i]=i; //initilizing heap memory
		cout<<p[i]<<endl;
	}
	return 0;
}