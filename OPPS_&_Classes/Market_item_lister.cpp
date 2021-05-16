#include <iostream>

using namespace std;

class itemrecord
{
private:
	int orderID[100];
	int orderPrice[100];
	int counter;

public:
	void initcounter() { counter = 0; }
	void order_check();
	void displayOrder();
};
void itemrecord ::order_check()
{
	cout << "Enter Order ID ";
	cin >> orderID[counter];
	cout << "Enter Order Price ";
	cin >> orderPrice[counter];
	counter++;
}

void itemrecord ::displayOrder()
{

	for (int i = 0; i < counter; i++)
	{
		cout << "The price of your Order ID " << orderID[i] << " is " << orderPrice[i] << endl;
	}
}
int main()
{
	itemrecord one;
	one.initcounter();
	one.order_check();
	one.displayOrder();
	return 0;
}