#include<iostream>
#include<string.h>
using namespace std;

class  stk
{
private :
unsigned int sz;
unsigned int cp;
int tp;
int *p;

public :
stk();
stk(const stk&other);
stk(stk&&other);
~stk();
stk &operator=(const stk&other);
stk &operator=(stk&&other);
void push(int);
int & top();
void pop();
int empty();
int size();
void swap(const stk&);
};

stk::stk()
{
cout<<"Default constructor"<<endl;
this->sz=this->cp=0;
this->tp=0;
this->p=NULL;
}

stk::stk(const stk&other)
{
this->sz=this->cp=0;
this->tp=0;
this->p=NULL;
if(other.p)
{
cout<<"Copy constructor"<<endl;
this->cp=other.cp;
this->sz=other.sz;
this->tp=other.tp;
this->p=other.p;
}
}

stk::stk(stk&&other)
{
cout<<"Move constructor"<<endl;
this->sz=other.sz;
this->cp=other.cp;
this->tp=other.tp;
this->p=other.p;
other.p=NULL;
other.sz=0;
other.tp=0;
}

stk::~stk()
{
cout<<"destructor"<<endl;
delete []this->p;
}

stk &stk::operator=(const stk&other)
{
cout<<"Copy assignment operator ="<<endl;
if(!this->p && !other.p)return *this;
if(!this->p)
{
this->sz=other.sz;
this->cp=other.cp;
this->p=new int[this->sz];
memcpy(this->p,other.p,this->sz*sizeof(int));
this->tp=other.tp;
return *this;
}
if(!other.p)
{
this->sz=0;
this->tp=0;
return *this;
}
if(this->cp<other.sz)
{
delete []this->p;
this->cp=other.cp;
this->sz=other.sz;
this->p=new int[this->cp];
memcpy(this->p,other.p,this->sz*sizeof(int));
this->tp=other.tp;
}
else
{
this->sz=other.sz;
memcpy(this->p,other.p,this->sz*sizeof(int));
this->tp=other.tp;
}
return *this;
}

stk &stk::operator=(stk&&other)
{
cout<<"Move assignment operator ="<<endl;
if(!this->p && !other.p)return *this;
if(!this->p)
{
this->p=other.p;
this->sz=other.sz;
this->cp=other.cp;
this->tp=other.tp;
other.p=NULL;
other.sz=0;
other.cp=0;
return *this;
}
if(!other.p)
{
this->sz=0;
return *this;
}
if(this->cp<other.cp)
{
delete []this->p;
this->p=other.p;
this->sz=other.sz;
this->cp=other.cp;
this->tp=other.tp;
other.p=NULL;
other.cp=0;
other.sz=0;
}
else
{
this->sz=other.sz;
memcpy(this->p,other.p,this->sz*sizeof(int));
this->tp=other.tp;
delete []other.p;
other.p=NULL;
other.sz=0;
other.cp=0;
}
return *this;
}

void stk::push(int data)
{
cout<<"push"<<endl;
if(!this->p)
{
this->p=new int[1];
this->sz=1;
this->cp=1;
this->p[0]=data;
this->tp=this->p[0];
return;
}
if(this->sz==this->cp)
{
int *tmp;
int new_cp=this->cp*2;
tmp=new int[new_cp];
memcpy(tmp,this->p,this->sz*sizeof(int));
delete []this->p;
this->p=tmp;
this->cp=new_cp;
this->p[this->sz]=data;
this->tp=this->p[this->sz];
++(this->sz);
}
else
{
this->p[this->sz]=data;
this->tp=this->p[this->sz];
++(this->sz);
}
}

int &stk::top()
{
cout<<"top"<<endl;
return this->tp;
}

void stk::pop()
{
if(this->sz>1)
{
cout<<"pop"<<endl;
--(this->sz);
this->tp=this->p[this->sz-1];
}
else
{
--(this->sz);
}
}

int stk::empty()
{
cout<<"empty stack"<<endl;
return this->sz==0;
}

int stk::size()
{
return this->sz;
}

int main()
{
stk s;
s.push(100);
cout<<s.top()<<endl;
s.push(200);
cout<<s.top()<<endl;
s.push(300);
cout<<s.top()<<endl;
s.push(400);
s.push(500);
cout<<"Size: "<<s.size()<<endl;
while(!s.empty())
{
cout<<s.top()<<endl;
s.pop();
}


return 0;
}


