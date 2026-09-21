#include<iostream>
using namespace std;

class rectangle
{
int length;
int breadth;
public :
void set_length(int length)
{
this->length=length;
}
void set_breadth(int breadth)
{
this->breadth=breadth;
}
int get_length()
{
return this->length;
}
int get_breadth()
{
return this->breadth;
}
};

class box:public rectangle
{
int height;
public :
void set_height(int height)
{
this->height=height;
}
int get_height()
{
return this->height;
}
};

int main()
{
rectangle rtgl;
box bx;
rtgl.set_length(10);
rtgl.set_breadth(30);
bx.set_height(50);
cout<<"Length :"<<rtgl.get_length()<<endl;
cout<<"Breadth :"<<rtgl.get_breadth()<<endl;
cout<<"Height :"<<bx.get_height()<<endl;
bx.set_length(100);
bx.set_breadth(200);
bx.set_height(150);
cout<<"Length :"<<bx.get_length()<<endl;
cout<<"Breadth :"<<bx.get_breadth()<<endl;
cout<<"Height :"<<bx.get_height()<<endl;
return 0;
}

