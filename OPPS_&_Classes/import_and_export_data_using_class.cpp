#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Shop
{
private:
	string p_name;
	int p_count;
	float p_price;
	//p_abcd --> p denotes product;
public:
	Shop(){}
	Shop(string n, int c, float p);
	friend ofstream &operator<<(ofstream &fos, Shop &o);
	friend ifstream &operator<<(ifstream &fis, Shop &i);
	friend ostream &operator<<(ostream &os, Shop &i);
};

Shop::Shop(string n, int c, float p)
{
	p_name = n;
	p_count = c;
	p_price = p;
}
ofstream & operator<<(ofstream &fos, Shop &o)
{
	fos<<o.p_name<<endl<<o.p_count<<endl<<o.p_price<<endl;
	return fos;
}

ifstream & operator<<(ifstream &fis, Shop &i)
{
	fis>>i.p_name>>i.p_count>>i.p_price;
	return fis;
}

ostream & operator<<(ostream &os, Shop &i)
{
	os<<i.p_name<<endl<<i.p_count<<endl<<i.p_price<<endl;
	return os;
}

int main()
{
	string name;
	int count;
	float price;
	int n;
	cout << "Enter the no. of input items : ";
	cin >> n;
	Shop *list[n], item;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter product name: ";
		cin >> name;
		cout << "Enter product left: ";
		cin >> count;
		cout << "Enter product price: ";
		cin >> price;
		list[i] = new Shop(name, count, price);
	}

	ofstream export1("shop_item.txt");
	for (int i = 0; i < n; i++)
	{
		export1<<*list[i];
	}
	export1.close();
	cout<<"\n\n";
	ifstream import1("shop_item.txt");
	for (int i = 0; i < n; i++)
	{
		import1<<item;
		cout<<"Item : "<<i + 1<<endl<<item<<endl;
	}
	return 0;
}