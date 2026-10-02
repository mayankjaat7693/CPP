/* Name : Mayank Jaat
   Date : 26 Sep 2026
   Topic: Virtual Function 
*/
#include<iostream>
using namespace std;

class aaa
{
public :
void sam()
{
cout<<"I am sam"<<endl;
}
virtual void tom()
{
cout<<"I am virtual tom"<<endl;
}
};
class bbb:public aaa
{
public :
void tom()
{
cout<<"I am tom"<<endl;
}
};
int main()
{
aaa *p;
p=new bbb;
p->sam();
p->tom();
delete p;
p=new aaa;
p->sam();
p->tom();
return 0;
}

