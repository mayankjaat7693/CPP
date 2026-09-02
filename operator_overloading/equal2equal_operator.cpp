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

int operator==(str&other)
{
int result=strcmp(this->p,other.p);
return result==0;
}

~str()
{
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
str a={"HELLO"};
cout<<a<<endl;
str b={"hello"};
cout<<b<<endl;
if(a==b)
{
cout<<"Both are same"<<endl;
}
else
{
cout<<"Both are not same"<<endl;
}
}

int main()
{
tony();
cout<<"end of sam fuction"<<endl;
cout<<"end of main fuction"<<endl;
return 0;
}





