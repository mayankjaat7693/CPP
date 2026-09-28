/* Name : Mayank Jaat
   Date : 17 Sep 2026
   Topic: create reference of object 
*/
#include<iostream>
using namespace std;

class aaa
{
public :
void print()const 
{
cout<<"Hello"<<endl;
}
};

aaa do_something()
{
aaa a;
return a;
} 

int main()
{
// aaa &b=do_something(); // will not compile
const aaa &c=do_something();
c.print();
return 0;
}
