#include<iostream>
#include<string.h>
using namespace std;

class str
{
private :
unsigned int cp;
char *p;
char fhaltu;
public :
str(const char *ptr=NULL)
{
this->p=NULL;
this->cp=0;
if(ptr)
{
this->cp=strlen(ptr)+1;
this->p=new char[this->cp];
strcpy(this->p,ptr);
}
}

str(const str&other)
{
this->p=NULL;
this->cp=0;
if(other.p)
{
this->cp=strlen(other.p)+1;
this->p=new char[this->cp];
strcpy(this->p,other.p);
}
}

str(str&&other)
{
this->p=other.p;
this->cp=other.cp;
other.cp=0;
other.p=NULL;
}

~str()
{
delete []this->p;
}

str & operator=(const char *ptr)
{
if(!(this->p) && !(ptr))return *this;
if(!(this->p))
{
this->cp=strlen(ptr)+1;
this->p=new char[this->cp];
strcpy(this->p,ptr);
return *this;
}
if(!(ptr))
{
this->p[0]='\0';
return *this;
}
int required_memory=strlen(ptr)+1;
if(required_memory>this->cp)
{
delete []this->p;
this->cp=required_memory;
this->p=new char[this->cp];
}
strcpy(this->p,ptr);
return *this;
}

str &operator=(const str&other)
{
if(!(this->p) && !(other.p))return *this;
if(!this->p)
{
this->cp=strlen(other.p)+1;
this->p=new char[this->cp];
strcpy(this->p,other.p);
return *this;
}
if(!(other.p))
{
this->p[0]='\0';
return *this;
}
int required_memory=strlen(other.p)+1;
if(required_memory>this->cp)
{
delete []this->p;
this->cp=required_memory;
this->p=new char[this->cp];
}
strcpy(this->p,other.p);
return *this;
}

str &operator=(str&&other)
{
if(!this->p && !other.p)return *this;
if(!other.p)
{
this->p[0]='\0';
return *this;
}
if(!this->p)
{
this->p=other.p;
this->cp=other.cp;
other.cp=0;
other.p=NULL;
}
if(this->cp>other.cp)
{
strcpy(this->p,other.p);
delete []other.p;
other.p=NULL;
other.cp=0;
}
else
{
delete []this->p;
this->cp=strlen(other.p)+1;
this->p=new char[this->cp];
strcpy(this->p,other.p);
other.p=NULL;
other.cp=0;
}
return *this;
}

int operator==(const str&other)
{
int result=strcmp(this->p,other.p);
return result==0;
}

int operator<(const str&other)
{
int result=strcmp(this->p,other.p);
return result<0;
}

int operator>(const str&other)
{
int result=strcmp(this->p,other.p);
return result>0;
}

int operator!=(const str&other)
{
int result=strcmp(this->p,other.p);
return result!=0;
}

int operator<=(const str&other)
{
int result=strcmp(this->p,other.p);
return result<=0;
}

int operator>=(const str&other)
{
int result=strcmp(this->p,other.p);
return result>=0;
}

str operator+(const char *ptr)
{
str obj;
if(!this->p && !ptr)return obj;
if(!this->p)
{
obj=ptr;
return obj;
}
if(!ptr)
{
obj=*this;
return obj;
}
obj.cp=strlen(this->p)+strlen(ptr)+1;
obj.p=new char[obj.cp];
strcpy(obj.p,this->p);
strcat(obj.p,ptr);
return obj;
}

str operator+(const str&other)
{
str obj;
if(!this->p && !other.p)return obj;
if(!this->p)
{
return obj=other;
}
if(!other.p)
{
return obj=*this;
}
obj.cp=strlen(this->p)+strlen(other.p)+1;
obj.p=new char[obj.cp];
strcpy(obj.p,this->p);
strcat(obj.p,other.p);
return obj;
}

str operator+(str&&other)
{
str obj;
if(!this->p && other.p)return obj;
if(!this->p)
{
return obj=other;
}
if(!other.p)
{
return obj=*this;
}
obj.cp=strlen(this->p)+strlen(other.p)+1;
obj.p=new char[this->cp];
strcpy(obj.p,this->p);
strcat(obj.p,other.p);
return obj;
}

char &operator[](int index)
{
if(index<0 || index>=this->cp)return fhaltu;
return this->p[index];
}

char* get_str()
{
return this->p;
}

int capacity()
{
return this->cp;
}
};

ostream&operator<<(ostream&jj,str&mm)
{
char *ss=mm.get_str();
if(ss)jj<<mm.get_str();
return jj;
}

int main()
{
str a="mayank";
cout<<a<<endl;
str b;
b="jaat";
cout<<b<<endl;
str c=a+b;
cout<<c<<endl;


return 0;
}





