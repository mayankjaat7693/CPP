/* Name : Mayank Jaat
   Date : 27 august 2026
   assignment : Constructor ( 1.empty constuctor
                              2.default constructor
                              3.default argument constructor
                              4.parameterized constructor
                              5.copy constructor
                              6.move constructor  )
*/
#include<iostream>
using namespace std;

class bulb 
{
private :
int wattage; 
public :
/*
bulb()                   empty constructor
{
}
*/

bulb()                   //default constructor
{
this->wattage=0;
}

bulb(int wattage)               //parameterized constructor
{                                 
this->wattage=wattage;            
}

/* 
bulb(int wattage=0)               // defualt argument constructor
{
this->wattage=wattage;
}
*/

bulb(bulb&other)                  // copy constructor 
{
this->wattage=other.wattage;
}

bulb(bulb&&other)                 // move constructor
{
this->wattage=other.wattage;
other.wattage=0;
}

void set_wattage(int wattage)      //setter
{
this->wattage=wattage;                  
}

int get_wattage()                 //getter
{
return this->wattage;
}
};

ostream &operator<<(ostream&jj,bulb&mm)
{
jj<<mm.get_wattage();
return jj;
}

int main()
{
bulb b;                           // default constructor
cout<<"default : "<<b<<endl;
bulb c(10);                       // parameterized constructor
cout<<"parameterized : "<<c<<endl;
bulb d=c;                         // copy constructor
cout<<"copy : "<<d<<endl;
bulb e=move(d);                   // move constructor
cout<<"move : "<<e<<endl;
return 0;
}

