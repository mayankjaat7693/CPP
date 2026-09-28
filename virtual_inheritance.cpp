/* Name : Mayank Jaat
   Date : 22 Sep 2026
   Topic: Virtual Inheritance Diamond Problem 
*/
#include<iostream>
using namespace std;

class aaa
{
public :
virtual void sam()
{
}
};

class bbb:virtual public aaa
{
public :
void tom()
{
}
};

class ccc:virtual public aaa
{
public :
void joy()
{
}
};

class ddd:public ccc,public bbb
{
public :
void john()
{
}
};

int main()
{
ddd d;
d.sam();
}
