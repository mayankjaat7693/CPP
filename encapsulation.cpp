/* Name : Mayank jaat
   Date : 20 August 2026
   assignment : Encapsulation
*/
#include<stdio.h>

class bulb
{
private :
int wattage;
public :
void set_wattage(int wtg)
{
if(wtg<0 || wtg>240)wattage=0;
else wattage=wtg;
}
int get_wattage()
{
return wattage;
}
};

int main()
{
bulb b;
b.set_wattage(30);
printf("Wattage: %d\n",b.get_wattage());
return 0;
} 
