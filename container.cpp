/* Name : Mayank Jaat
   Data : 19 september 2026
   Assignment : Container ( Has a relationship between entities)
*/
#include<iostream>
#include<string>
using namespace std;

class ink
{
private :
string color;
double viscosity;
public :

ink()
{
this->color="black";
this->viscosity=1.5;
}

ink(string color,double viscosity)
{
this->color=color;
this->viscosity=viscosity;
}

void set_color(string color)
{
this->color=color;
}

void set_viscosity(double viscosity)
{
this->viscosity=viscosity;
}

string get_color()
{
return this->color;
}

double get_viscosity()
{
return this->viscosity;
}
};

class pen
{
int price;
ink _ink;
public :
pen()
{
this->price=10;
}
pen(int price,ink _ink)
{
this->price=price;
this->_ink=_ink;
}

void set_price(int price)
{
this->price=price;
}

void set_ink(ink _ink)
{
this->_ink=_ink;
}

int get_price()
{
return this->price;
}

ink get_ink()
{
return this->_ink;
}
};

int main()
{
ink i("RED",1.6);
pen p(20,i);
cout<<p.get_ink().get_color()<<endl;
cout<<p.get_ink().get_viscosity()<<endl;
cout<<p.get_price()<<endl;
p.set_price(30);
i.set_color("BLUE");
i.set_viscosity(1.7);
p.set_ink(i);
cout<<p.get_ink().get_color()<<endl;
cout<<p.get_ink().get_viscosity()<<endl;
cout<<p.get_price()<<endl;
pen pp(50,ink("GREEN",2.0));                           // anonymous object create
cout<<pp.get_ink().get_color()<<endl;
cout<<pp.get_ink().get_viscosity()<<endl;
cout<<pp.get_price()<<endl;
return 0;
}



