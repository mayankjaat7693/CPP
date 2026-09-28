/* Name : Mayank Jaat
   Date : 22 Sep 2026
   Topic: Static Properties
*/
#include<iostream>
using namespace std;

class aaa
{
static int price;
static int wattage;
public :
aaa(int rs,int wattage)
{
this->wattage=wattage;
price=rs;
}
static int get_price()
{
return price;
}
static int get_wattage()
{
return wattage;
}
};

int aaa::price; //essential
int aaa::wattage;

int main()
{

cout<<"Price:"<<aaa::get_price()<<endl;
aaa p(1000,100);
cout<<"Wattage:"<<p.get_wattage()<<endl;
cout<<"Price:"<<p.get_price()<<endl;
return 0;
}
