#include<iostream>
using namespace std;
class bulb 
{
private :
int wattage;
public :
void set_wattage(int wattage)
{
this->wattage=wattage;
}
int get_wattage()
{
return this->wattage;
}
bulb(int wattage)    // Parameterized Constructor
{
this->wattage=wattage;
cout<<"Wattage(constructor): "<<get_wattage()<<endl;
}
};

int main()
{
bulb b(50);
b.set_wattage(100);
cout<<"Wattage : "<<b.get_wattage()<<endl;
return 0;
}
