// by default access is treated as private
#include<stdio.h>
class bulb
{
int wattage;   // treated as private
public :
void set_wattage(int w)
{
if(w<0||w>240)w=0;
wattage=w;
}
int get_wattage()
{
return wattage;
}
};
int main()
{
bulb b;
 //will compile 
b.set_wattage(50);
printf("Wattage: %d\n",b.get_wattage());
return 0;
}
