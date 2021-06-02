#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int i,n;
string name[100], age[100], branch[100];

ifstream export1("text.txt");

void database()
{
	for ( i = 0; i < n; i++)
	{
		export1>>name[i]>>age[i]>>branch[i];
	}

}

int main()
{
	cout<<"Enter the No. of records you want to import and print : ";
	cin>>n;
	cout<<endl;
	
	database();

	for ( i = 0; i < n; i++)
	{
		cout<<name[i]<<endl<<age[i]<<endl<<branch[i]<<endl<<endl;
	}

	return 0;
}
