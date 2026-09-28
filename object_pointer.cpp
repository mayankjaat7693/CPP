/* Name : Mayank Jaat
   Date : 22 Sep 2026
   Topic: Pointer to object
*/
#include<iostream>
using namespace std;

class bulb
{
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
};

int main()
{
bulb b;
bulb *p;
p=&b;
p->set_wattage(100);
cout<<"Wattage: "<<(*p).get_wattage()<<endl;
return 0;
}


