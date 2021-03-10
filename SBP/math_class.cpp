#include<iostream>
using namespace std;

class math
{
	public:
	int v1;
	int v2;
	
	int add()
	{
		return v1+v2;
	}
	int sub()
	{
		return v1-v2;
	}
	int multi()
	{
		return v1*v2;
	}
	int divis()
	{
		return v1/v2;
	}
};

int main()
{
	math ans;
	cin>>ans.v1>>ans.v2;
	cout<<ans.add()<<endl;
	cout<<ans.sub()<<endl;
	cout<<ans.multi()<<endl;
	cout<<ans.divis()<<endl;
}