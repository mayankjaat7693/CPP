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
cout<<"result"<<result<<endl;
return result==0;
}

int operator<(str&other)
{
int result=strcmp(this->p,other.p);
cout<<"result"<<result<<endl;
return result<0;
}

int operator>(str&other)
{
int result=strcmp(this->p,other.p);
cout<<"result"<<result<<endl;
return result>0;
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
str a={"HELLO JI"};
cout<<a<<endl;
str b={"HELLO"};
cout<<b<<endl;
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
}

int main()
{
tony();
cout<<"end of sam fuction"<<endl;
cout<<"end of main fuction"<<endl;
return 0;
}





