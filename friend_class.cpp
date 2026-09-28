/* Name : Mayank Jaat
   Date : 22 Sep 2026
   Topic: Friend Class 
*/
#include<iostream>
using namespace std;

class bulb
{
int price;
public:
void set_price(int price)
{
this->price=price;
}
int get_price()
{
return this->price;
}
friend class Calculator;
};

class toy
{
int price;
public:
void set_price(int price)
{
this->price=price;
}
int get_price()
{
return this->price;
}
friend class Calculator;
};

class Calculator
{
public:
int CalculatorSum(const bulb&j,const toy&k)
{
return j.price+k.price;
}
};

int main()
{
toy t;
t.set_price(1000);
bulb b;
b.set_price(100);
Calculator c;
int total=c.CalculatorSum(b,t);
cout<<"Total: "<<total<<endl;
return 0;
}
