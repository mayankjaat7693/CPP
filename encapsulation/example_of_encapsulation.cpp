#include<stdio.h>

class bulb
{
private:
int wattage;               // properties 
public:
void set_wattage(int w)   //methods
{
wattage=w;
}
int get_wattage()         //methods
{
return wattage;
}
};

int main()
{
bulb b1,b2;             //objects;
b1.set_wattage(60);
b2.set_wattage(100);
printf("B2 Wattage: %d\n",b2.get_wattage());
printf("B1 Wattage: %d\n",b1.get_wattage());
return 0;
}
