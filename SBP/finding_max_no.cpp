#include<iostream>

using namespace std;

int main()
{
	int a[5]={1,9,5,4,6};
	int maxx=a[0];

	for(int i=0; i<5; i++)
	{
		if(maxx<a[i])
			maxx=a[i];
	}
	cout<<endl<<maxx<<endl;
	return 0;
}
