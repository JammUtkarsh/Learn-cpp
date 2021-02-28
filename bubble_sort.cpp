#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    cout<<endl<<endl;
    int i=0;
    while(a[i]>a[i+1])
    {
        swap(a[i], a[i+1]);
    }
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<endl;
    }
}
