#include<iostream>

using namespace std;

int main()
{
	int nums[5], runningsum[5];

	for (int i = 0; i < 5; i++)
	{
		cin>>nums[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			runningsum[i] = 0;
			runningsum[i] = nums[j];
		}
		cout<<runningsum[i];
	}
	
}