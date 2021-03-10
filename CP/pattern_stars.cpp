#include<iostream>

using namespace std;

int main()
{
	int count=1;

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i>=j)
			cout<<"m ";
		}
		cout<<endl;
	}

	cout<<"\n";

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i>j)
				cout<<" ";
			else
				cout<<"x";
		}
		cout<<endl;
	}

	cout<<"\n";

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i+j<4)
				cout<<" ";
			else
				cout<<"^ ";
		}
		cout<<endl;
	}

	cout<<"\n";

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i>j)
				cout<<" ";
			else
				cout<<"* ";
		}
		cout<<endl;
	}
}