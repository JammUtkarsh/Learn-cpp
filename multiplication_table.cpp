#include<iostream>

using namespace std;

int main()
{
	int n,x;
	cout<<"Enter the number for which table is to be derived ";
	cin>>n;

	for(int i=1;i<=10;i++)
	{
		x=n*i;
		cout<<n<<" * "<<i<<" = "<<x<<endl;
	}
	return 0;
}
