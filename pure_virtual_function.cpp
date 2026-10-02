/* Name : Mayank Jaat
   Date : 29 Sep 2026
   Topic: Pure Virtual Function ( abstract class )
*/
#include<iostream>
#include<vector>
using namespace std;

class car          
{
public :
virtual string get_model()=0;     // pure virtual function
// virtual int get_price()=0;        // pure virtual function
virtual ~car()
{
cout<<"Base class desctructor"<<endl;
}
};

class service_station
{
public:
void do_service(car *p)
{
cout<<"Service of "<<p->get_model()<<"in progess"<<endl;
}
};


class MarutiAlto:public car
{
string model;
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
~MarutiAlto()
{
cout<<"Maruti Alto desctructor"<<endl;
}
};

class HondaCity:public car
{
string model;
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
~HondaCity()
{
cout<<"Honda City desctructor"<<endl;
}
};

class HondaJazz:public car
{
string model;
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
~HondaJazz()
{
cout<<"Honda Jazz desctructor"<<endl;
}
};

int main()
{
service_sataion ss;
MarutiAlto m;
HondaCity hc;
HondaJazz hj;
ss.do_service(&m);
ss.do_service(&hc);
ss.do_service(&hj);
return 0;
}
