#include<iostream>
#include<string>
using namespace std;

class student
{
private:
	int rollnum;
	string name;
	int phyMark;
	int chemMark;
	int mathMark;
public:
	student(int r, string n, int p, int c, int m)
	{
		rollnum = r;
		name = n;
		phyMark = p;
		chemMark = c;
		mathMark = m;
	}
	int total();
	void grade();
};

int student :: total()
{
	return phyMark + chemMark + mathMark;
}

void student :: grade()
{
	int average = total()/3;
	if (average>60)
		cout<<"A";
	else if (average<60 && average>30)
		cout<<"B";
	else
		cout<<"C";
}

int main()
{
	int rollnumber;
	string name;
	int p, c, m;
	
	cout<<"Enter your roll number"<<endl;
	cin>>rollnumber;
	cout<<"Enter your name "<<endl;
	cin>>name;
	cout<<"Enter your marks of PCM"<<endl;
	cin>>p>>c>>m;
	student rohan(rollnumber, name, p, c, m);
	cout<<endl;
	cout<<"Total Makrs : "<<rohan.total()<<endl;
	cout<<"Grade : ";
	rohan.grade();

	return 0;
}