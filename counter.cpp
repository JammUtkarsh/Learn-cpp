#include<iostream>

using namespace std;

int main()
{
	int n=10, i=1;
	cout<<"Printing in while loop \n";

	while(i<=n)
	{
		cout<<i<<endl;
		i++;
	}

	cout<<"\nPrinting in do while loop\n";
	i=1;
	do
	{
		cout<<i<<endl;
		i++;
	}while(i<=n);

	return 0;
}
