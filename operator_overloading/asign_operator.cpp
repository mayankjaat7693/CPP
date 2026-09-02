#include<iostream>
#include<string.h>
using namespace std;
class str
{
private :
char *p;
public :
str(){}
str(const char *ptr)
{
this->p=new char[strlen(ptr)+1];
strcpy(this->p,ptr);
}

char *getchar()
{
return this->p;
}

void operator=(const char*ptr)
{
if(strlen(this->p)>strlen(ptr))
{
strcpy(this->p,ptr);
}
else
{
delete []this->p;
this->p=new char[strlen(ptr)+1];
strcpy(this->p,ptr);
}
}

int operator==(str&other)
{
int result=strcmp(this->p,other.p);
return result==0;
}

int operator<(str&other)
{
int result=strcmp(this->p,other.p);
return result<0;
}

int operator>(str&other)
{
int result=strcmp(this->p,other.p);
return result>0;
}

~str()
{
cout<<this->p<<endl;
delete []p;
}
};

ostream&operator<<(ostream&ct,str&obj)
{
ct<<obj.getchar();
return ct;
}

void tony()
{
str a="HELLO JI";
cout<<a<<endl;
str b="HELLO";
cout<<b<<endl;
str c="I am mayank jaat";
cout<<c<<endl;

if(a==b)
{
cout<<"Both are same"<<endl;
}
else if(a<b)
{
cout<<a<<" Less than "<<b<<endl;
}
else if(a>b)
{
cout<<a<<" Greater than "<<b<<endl;
}
cout<<endl;
b="HII";
cout<<b<<endl;
cout<<endl;
b="Hello mayank jaat";
cout<<b<<endl;
}

int main()
{
tony();
cout<<"end of sam fuction\n"<<endl;
cout<<"end of main fuction\n"<<endl;
return 0;
}





