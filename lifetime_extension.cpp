/* Name : Mayank Jaat
   Data : 17 september 2026
   Assignment : LifeTime Extension
*/
#include<iostream>
using namespace std;

class bulb
{
int wattage;                      // by default private
public :
bulb()
{
this->wattage=0;
}
bulb(int wattage)
{
this->wattage=wattage;
}
bulb(bulb&other)
{
this->wattage=other.wattage;
}
bulb(bulb&&other)
{
this->wattage=other.wattage;
other.wattage=0;
}
void set_wattage(int wattage)
{
this->wattage=wattage;
}
int get_wattage() const
{
return this->wattage;
}
};

bulb do_something()
{
bulb b=10;
return b;                             // return by value
}

ostream&operator<<(ostream&jj,bulb&mm)
{
jj<<mm.get_wattage();
return jj;
}

int main()
{
const bulb &c=do_something();             // lifetime extension
cout<<c.get_wattage()<<endl;
return 0;
}


