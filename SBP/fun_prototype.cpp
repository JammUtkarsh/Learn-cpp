#include<iostream>

using namespace std;

float compound(int, float);

int main()
{
    int money, interest;
    cout<<"Enter the money deposited in bank "<<endl;
    cin>>money;
    cout<<"Enter the interest offered by bank "<<endl;
    cin>>interest;
    cout<<"The Interest after 1 year will be "<<compound(money, interest);
    return 0;
}

float compound(int moneyrecived, float interest )
{
    return moneyrecived + (moneyrecived * interest/100);
}