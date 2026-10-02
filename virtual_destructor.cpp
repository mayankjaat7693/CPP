/* Name : Mayank Jaat
   Date : 29 Sep 2026
   Topic: Virtual destructor 
*/
#include<iostream>
#include<vector>
using namespace std;

class car
{
public :
virtual ~car()
{
cout<<"base class destructor"<<endl;
}
};

class MarutiAlto:public car
{
string model;
int price;
public :
~MarutiAlto()
{
cout<<"Maruti Alto desctructor"<<endl;
}
};

class HondaCity:public car
{
string model;
int price; 
public :
~HondaCity()
{
cout<<"Honda City desctructor"<<endl;
}
};

class HondaJazz:public car
{
string model;
int price;
public :
~HondaJazz()
{
cout<<"Honda Jazz desctructor"<<endl;
}
};

int main()
{
vector<car*>cars;
int choice;
while(1)
{
cout<<"1.Maruti Alto add to cart"<<endl;
cout<<"2.Honda City add to cart"<<endl;
cout<<"3.Honda Jazz add to cart"<<endl;
cout<<"4.Checkout"<<endl;
cout<<"Enter your choice: ";
cin>>choice;
if(choice==1)
{
cars.push_back(new MarutiAlto);
}
else if(choice==2)
{
cars.push_back(new HondaCity);
}
else if(choice==3)
{
cars.push_back(new HondaJazz);
}
else if(choice==4)
{
break;
}
else
{
cout<<"Invalid choice"<<endl;
}
}
for(auto p:cars)delete p;
return 0;
}
