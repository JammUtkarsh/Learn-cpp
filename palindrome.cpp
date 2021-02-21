#include<iostream>

using namespace std;

int main()
{
	int r,m,n,sum=0;
	cout<<"Enter a number ";
	cin>>n;
	m=n;
	while(n>0)
	{
		r=n%10;
		n/=10;
		sum=sum*10 + r;
	}
	if(sum==m)
		cout<<"It is a palindrome number";
	else
		cout<<"It is not a palindrome number";
	return 0;
	
}
