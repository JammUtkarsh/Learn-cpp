#include<iostream>

using namespace std;

int main()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }

    cout<<endl<<endl;

    for(int i=0; i<5-1; i++)
    {
        for ( i=0; i <5-2; i++)
        {
            if (a[i]>a[i+1])
            {
                int temp;
	            temp=a[i];
	            a[i]=a[i+1];
	            a[i+1]=temp;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<endl;
    }
}
