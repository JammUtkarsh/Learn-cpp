#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	int employeeID;
	string employeeName;

public:
	Employee(int givenID, string givenName) //Constructor declared
	{
		employeeID = givenID;
		employeeName = givenName;
	}
	void getEmployeeID(int id)
	{
		employeeID = id;
	}
	void getEmployeeName(string n)
	{
		employeeName = n;
	}
};

class fullEmployee : public Employee
{
	private:
	int fullSalary;
	public:
	fullEmployee( int id, string n, int s) : Employee(id, n)
	{
		fullSalary = s;
	}
	void statmentFull()
	{
		cout << "Respected " << employeeName << " your employee ID is " << employeeID<<" and your income is "<<fullSalary<<endl;
	}
};

class partEmployee : public Employee
{
	private:
	int wage;
	public:
	partEmployee( int id, string n, int w) : Employee(id, n)
	{
		wage = w;
	}
	void statementPart()
	{
		cout << "Respected " << employeeName << " your employee ID is " << employeeID<<" and your income is "<<wage<<endl;
	}
};

int main()
{
	fullEmployee e1(101,"Raj",300);
	partEmployee e2(201,"Salmon",300);
	e1.statmentFull();
	e2.statementPart();
	return 0;
}