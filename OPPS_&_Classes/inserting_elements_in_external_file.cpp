#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int i;
ofstream insert1("text.txt");

void database(string name, int age, string branch)
{
	insert1 << i << "." << name << endl;
	insert1 << i << "." << age << endl;
	insert1 << i << "." << branch << endl;
}

int main()
{
	string name;
	int age;
	string branch;
	int n;
	cout << "Enter the No. of Records you want to enter: ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cout << "Record no. : " << i << endl;

		cout << "Name : ";
		cin >> name;
		cout << "Age : ";
		cin >> age;
		cout << "Branch : ";
		cin >> branch;

		database(name, age, branch);
	}

	insert1.close();
	return 0;
}