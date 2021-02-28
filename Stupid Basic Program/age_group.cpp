#include<iostream>

using namespace std;

int main()
{
	int age;
	cout<<"Enter your age \n";
	cin>>age;

	if(age<=14)
	{
		cout<<"You belong to children group\n";
	}
	else if(age>=15 && age<24)
		{
			cout<<"You belong to youth group\n";
		}
		else if(age>=25 && age<64)
			{
				cout<<"You belong to adult group\n";
			}
			else if(age>65)
				{
				cout<<"You belong to seinor group\n";
				}
	return 0;
}
