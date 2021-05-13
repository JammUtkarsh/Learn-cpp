#include<iostream>

using namespace std;

template <class temp>
temp maxim(temp a, temp b)
{
	return a>b ? a:b;
}

int main()
{
	cout<<maxim(12,14)<<endl;
	
}