/* Name : Mayank jaat
   Date : 22 August 2026
   assignment : Scope resolution operator
*/
#include<stdio.h>

class bulb
{
private :
int wattage;
public :
void set_wattage(int);
int get_wattage();
};

void bulb::set_wattage(int wattage)
{
if(wattage<0 || wattage>240)this->wattage=wattage;
else this->wattage=wattage;
}

int bulb::get_wattage()
{
return this->wattage;
}

int main()
{
bulb b;
b.set_wattage(30);
printf("Wattage: %d\n",b.get_wattage());
return 0;
} 
