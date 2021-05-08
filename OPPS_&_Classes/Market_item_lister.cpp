#include<iostream>

using namespace std;

class itemrecord
{
    private:
    int orderID[100];
    int orderPrice[100];
    int counter; 
    public:
    void initcounter(){ counter = 0;}
    void order_check();
    void display_order();
};
void itemrecord :: order_check(){
    cout<<"Enter Order ID ";
    cin>>orderID[counter];
    cout<<"Enter Order Price ";
    cin>>orderPrice[counter];
    counter ++;
}

void itemrecord :: display_order(){
    
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of your Order ID "<<orderID[counter]<<" is "<<orderPrice[counter]<<endl;
    }
    
    
}
int main(){
    itemrecord one;
    one.initcounter();
    one.order_check();
    one.order_check();
    one.display_order();
    return 0;
}