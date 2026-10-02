/* Name : Mayank Jaat
   Date : 26 Sep 2026
   Topic: Virtual Polymorphism 
*/
#include<iostream>
#include<vector>
using namespace std;

class car
{
public :
virtual string get_model()
{
return "";
}
virtual int get_price()
{
return 0;
}
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
MarutiAlto()
{
this->model="Maruti Alto";
this->price=350000;
}
string get_model()
{
return this->model;
}
int get_price()
{
return this->price;
}
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
HondaCity()
{
this->model="Honda City";
this->price=1000000;
}
string get_model()
{
return this->model;
}
int get_price()
{
return this->price;
}
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
HondaJazz()
{
this->model="Honda Jazz";
this->price=750000;
}
string get_model()
{
return this->model;
}
int get_price()
{
return this->price;
}
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
int total_cost=0;
for(auto k:cars)
{
cout<<k->get_model()<<endl;
total_cost+=k->get_price();
}
cout<<"Total is: "<<total_cost<<endl;
for(auto p:cars)delete p;
return 0;
}
