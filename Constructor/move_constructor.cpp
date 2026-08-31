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
bulb(int wattage)
{
this->wattage=wattage;
} 
bulb(bulb &&b)    // Move Constructor
{
cout<<"Wattage(constructor): "<<b.get_wattage()<<endl;
}
};

int main()
{
bulb b(50);
bulb c(move(b));
b.set_wattage(100);
cout<<"Wattage : "<<b.get_wattage()<<endl;
return 0;
}
