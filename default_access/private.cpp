// declare private after public 
#include<stdio.h>
class bulb_1
{
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
private :
int wattage;
};
// declare private before public
class bulb_2
{
private :
int wattage;
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
bulb_1 b1;
bulb_2 b2;
b1.set_wattage(30);
b2.set_wattage(20);
printf("Wattage 1: %d\n",b1.get_wattage());
printf("Wattage 2: %d\n",b2.get_wattage());
return 0;
}



