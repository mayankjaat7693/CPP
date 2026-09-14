#include<iostream>
#include<string.h>
using namespace std;

class vec
{
private :
unsigned int cp;
unsigned int sz;
int *p;
int fhaltu;

public :
vec();
vec(const vec&);
vec(vec &&);
~vec();
vec &operator=(const vec&);
vec &operator=(vec&&);
int &operator[](int);
int size();
int capacity();
void push_back(int);
};

vec::vec()
{
this->cp=this->sz=0;
this->p=NULL;
}

vec::vec(const vec&other)
{
this->cp=this->sz=0;
this->p=NULL;
if(other.p)
{
this->cp=other.cp;
this->sz=other.sz;
this->p=new int[this->sz];
memcpy(this->p,other.p,this->sz*sizeof(int));
}
}

vec::vec(vec &&other)
{
this->cp=other.cp;
this->sz=other.sz;
this->p=other.p;
other.p=NULL;
other.cp=0;
other.sz=0;
}

vec::~vec()
{
delete []this->p;
}

vec &vec::operator=(const vec&other)
{
if(!this->p && !other.p)return *this;
if(!this->p && other.sz==0)
{
this->sz=0;
return *this;
}
if(this->cp<other.sz)
{
delete []this->p;
this->cp=other.cp;
this->sz=other.sz;
this->p=new int[this->sz];
memcpy(this->p,other.p,other.sz*sizeof(int));
}
else
{
memcpy(this->p,other.p,other.sz*sizeof(int));
this->sz=other.sz;
}
return *this;
}

vec &vec::operator=(vec&&other)
{
if(!this->p && !other.p)return *this;
if(this->p)
{
this->sz=0;
return *this;
}
if(other.p)
{
this->p=other.p;
this->sz=other.sz;
this->cp=other.cp;
other.p=NULL;
other.cp=0;
other.sz=0;
return *this;
}
if(this->cp>other.cp)
{
this->sz=other.sz;
memcpy(this->p,other.p,this->sz*sizeof(int));
delete []other.p;
other.p=NULL;
other.cp=0;
other.sz=0;
}
else
{
delete []this->p;
this->cp=other.cp;
this->sz=other.sz;
this->p=other.p;
memcpy(this->p,other.p,this->sz*sizeof(int));
other.p=NULL;
other.sz=0;
other.cp=0;
}
return *this;
}

void vec::push_back(int data)
{
if(!this->p)
{
this->p=new int[1];
*(this->p)=data;
this->cp=this->sz=1;
return;
}
if(this->sz==this->cp)
{
int new_cp=this->cp*2;
int *temp;
temp=new int[new_cp];
memcpy(temp,this->p,this->sz*sizeof(int));
delete []this->p;
this->p=temp;
this->cp=new_cp;
this->p[this->sz]=data;
++(this->sz);
}
else
{
this->p[this->sz]=data;
++(this->sz);
}
}

int &vec::operator[](int index)
{
if(index<0 || index>=this->sz)return fhaltu;
return this->p[index];
}

int vec::size()
{
return this->sz;
}

int vec::capacity()
{
return this->cp;
}

int main()
{
vec s;
s.push_back(100);
s.push_back(200);
s.push_back(300);
cout<<"Size: "<<s.size()<<endl;
for(int i;i<s.size();i++)cout<<s[i]<<endl;




return 0;
}
