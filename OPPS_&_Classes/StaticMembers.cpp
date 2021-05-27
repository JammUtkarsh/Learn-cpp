#include<iostream>
using namespace std;

class student
{
	public:
	int roll;
	static int addRoll;  // Static Member created
	student()
	{
		addRoll++;
		roll = addRoll;
	}
	void display()
	{
		cout<<"Your admission no. is "<<addRoll<<" and roll no. "<<roll<<endl;
	}
};

int student::addRoll=0; 	// Static member initilized

int main()
{
	student s1;
	s1.display();				// static member can also be called via an object.
	student s2;
	student s3;
	student s4;
	
	cout<<"Current admisson number is "<<student::addRoll<<endl;		// static member can be also called directly

	return 0;
}