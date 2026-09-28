/* Name : Mayank Jaat
   Date : 22 Sep 2026
   Topic: Diamond Problem 
*/
#include<iostream>
using namespace std;

class aaa
{
public :
void sam()
{
}
};

class bbb:public aaa
{
public :
void tom()
{
}
};

class ccc:public aaa
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
