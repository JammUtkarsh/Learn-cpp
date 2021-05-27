#include<iostream>
using namespace std;

class car                   // this is an abstract class;
{
    public:
    virtual void display()=0;       // pure virtual function created
    virtual void fun()=0;           // It is created purposefully for overriding that is to enfore child class to have these functions
};
class innova: public car
{
    void display(){
        cout<<"Display of Innova"<<endl;
    }
	void fun(){
		cout<<"fun of Innova"<<endl;
	}
};
class swift: public car
{
    void display(){
        cout<<"Display of Swift"<<endl;
    }
	void fun(){
		cout<<"fun of Swift"<<endl;
	}
};

int main()
{
    // car c;                       // object of class car cannot be created because its an abstract class.
    // innova i;                    // object of class car cannot be created because its an abstract class ; Need to be created via pointer.
    car* p = new innova();          //  pointer of parent(car) class created an object of derived(innova) class.
    p->display();
    p->fun();
    car* p2 = new swift();          //  pointer of parent(car) class created an object of derived(innova) class.
    p2->display();
    p2->fun();
	return 0;
}

// If all the functions of parent class are not created in child class, it will throw an error in runtime.