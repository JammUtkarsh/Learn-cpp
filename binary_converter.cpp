#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cout << "Enter the number ";
	cin >> n;
	while(n>0)
	{
		m=n%2;
		n=n/2;
		cout<<m;
	}
	cout<<endl;
	return 0;
}
