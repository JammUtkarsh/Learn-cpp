#include<iostream>
#include<string>
using namespace std;

class classroom
{
private:
	int rollnum;
	int marks[3];
	string name;
public:
	void setRollnum(int rnum);
	void setName(string sName);
	void setMarks(int m1, int m2, int m3);

	float averageMarks();
	void grade();
};
void classroom :: setName(string sName)
{
	name = sName;
}
void classroom ::setRollnum(int rnum)
{
	rollnum = rnum;
}
void classroom :: setMarks(int m1, int m2, int m3)
{
	marks[0] = m1;
	marks[1] = m2;
	marks[2] = m3;
}
float classroom :: averageMarks()
{
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += marks[i];
	}
	return sum/3;
	
}
int main()
{
	int rollnumber;
	string name;
	int m1, m2, m3;
	
	cout<<"Enter your roll number"<<endl;
	cin>>rollnumber;
	cout<<"Enter your name "<<endl;
	cin>>name;
	cout<<"Enter your marks"<<endl;
	cin>>m1>>m2>>m3;

	classroom rohan;
	rohan.setRollnum(rollnumber);
	rohan.setName(name);
	rohan.setMarks(m1, m2, m3);
	cout<<endl;
	cout<<rollnumber<<" : "<<name<<" has got an average of "<<rohan.averageMarks()<<endl;

	return 0;
}