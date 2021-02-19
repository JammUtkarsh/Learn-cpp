#include<iostream>

using namespace std;

int main()
{
	int count=0,n;
	cout<<"Enter a number"<<endl;
	cin>>n;

	for(int i=1; i<=n;i++)
	{
		if(n%i==0)
			count++;

	}
	if(count==2)
		cout<<endl<<"It is a prime number";
	else
		cout<<"It is not a prime number"<<endl;
	return 0;
}
