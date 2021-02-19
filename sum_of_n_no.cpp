#include<iostream>

using namespace std;

int main()
{
	int sum=0,n;
	cout<<"Enter a positive number ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		sum+=i;
	}
	cout<<"The sum of "<<n<<" terms is "<<sum;
	return 0;
}
