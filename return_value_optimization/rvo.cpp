#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class str
{
private :
char *p;
public : 
str()    // default contructor
{
cout<<"Default Constructor"<<endl;
this->p=NULL;
}
str(const char *ptr)
{
this->p=NULL;
if(ptr)
{
this->p=new char[strlen(ptr)+1];
strcpy(this->p,ptr);
}
}
str(str&other)  // copy costructor
{
cout<<"Copy Constructor"<<endl;
this->p=NULL;
if(other.p)
{
this->p=new char[strlen(other.p)+1];
strcpy(this->p,other.p);
}
}
char *get_str()
{
return this->p;
}
};

ostream &operator<<(ostream&st,str&obj)
{
char *s=obj.get_str();
if(s)st<<obj.get_str();
return st;
}


str do_something()
{
str a="god is great";
cout<<a<<endl;
cout<<"A :"<<&a<<endl;
return a;                    // object returned value (object)
}

int main()
{
str b=do_something();
str a;
cout<<"B :"<<b<<endl;
cout<<"B :"<<&b<<endl;
return 0;
}


