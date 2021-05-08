#include <iostream>

using namespace std;

class stringcheck
{
private:
    string s;
    void bin_check(void);

public:
    void read(void);
    void compliment(void);
    void display(void);
};

void stringcheck :: read(void)
{
    cout << "Enter in binary foramt ";
    cin >> s;
    bin_check();
}

void stringcheck :: bin_check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format";
            exit(0);
        }
    }
    
}

void stringcheck :: compliment(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0' )
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    
}

void stringcheck :: display(void){

    cout<<"Displaying String \n";

    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    stringcheck checker;
    checker.read();
    checker.compliment();
    checker.display();
    return 0;
}