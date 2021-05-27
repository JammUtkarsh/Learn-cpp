#include <iostream>
using namespace std;

class outer
{
public:
	class inner
	{
	public:
		void display()
		{
			cout << endl << "Inner Class Display" << endl;
		}
	};
	void fun()
	{
		i.display();	 // display function of inner must be wriiten in a outer function else it is not accessable.
	}
	inner i;			 // Object of inner class for outer use only.
};
int main()
{
	outer o;
	outer::inner i2; 	// Object of inner class for main fun use.
	i2.display();
	o.fun();			// accessing inner/display indirectly
}