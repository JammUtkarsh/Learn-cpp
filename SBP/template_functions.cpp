#include<iostream>

using namespace std;

template<class T>
T add(T a, T b)
{
	return a+b;
}
int main()
{
	cout<<add(10,5)<<endl;
    cout<<add(15.6,67.3)<<endl;
	cout<<add(14.3f,12.5f)<<endl;
}