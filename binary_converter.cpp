#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cout << "Enter the number ";
	cin >> n;
	m=n;
	do
	{
		n/=2;
		m%=2;
		cout<<m;
		m=n;
	} while (n==1);
	
	cout<<endl;
	return 0;
}
