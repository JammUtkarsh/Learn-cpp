#include<iostream>

using namespace std;

int main()
{
	int v,u,a,t;
	cout<<"Enter inital velocity\n";
	cin>>u;

	cout<<"\nEnter accleration\n";
	cin>>a;
	cout<<"\nEnter time taken\n";
	cin>>t;
	v=u + a*t;
	cout<<"\nThe final velocity is "<<v;
	return 0;
}
