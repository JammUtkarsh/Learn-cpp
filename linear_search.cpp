#include<iostream>

using namespace std;

int main()
{
	int a[10], n=10,key;
	cout<<"Enter some numbers\n";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a number to be searched in the above list ";
	cin>>key;

	for(int i=0; i<n; i++)
	{
		if (key==a[i])
		{
			int found=i;
			found++;
			cout<<"The number is on "<<found<<" number of list\n";
		}
	}
	return 0;
}
