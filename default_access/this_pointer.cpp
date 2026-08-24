#include<stdio.h>
class bulb
{
private :
int wattage;
public :
void set_wattage(int wattage)
{
if(wattage<0||wattage>240)wattage=0;
this->wattage=wattage; // local variable and object variable name same,use this pointer in non static method
}
int get_wattage()
{
return this->wattage;
}
};

int main()
{
bulb b,b1; //this pointer store object address
b.set_wattage(100);
b1.set_wattage(-23);
printf("Wattage: %d\n",b.get_wattage());
printf("Wattage: %d\n",b1.get_wattage());
return 0;
}
