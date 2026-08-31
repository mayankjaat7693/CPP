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
bulb()    // Default Constructor
{
cout<<"Default Constructor"<<endl;
}
};

int main()
{
bulb b;
b.set_wattage(100);
cout<<"Wattage : "<<b.get_wattage()<<endl;
return 0;
}
