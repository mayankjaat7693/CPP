/* Name : Mayank Jaat
   Date : 22 Sep 2026
   Topic: Static Method
*/
#include<iostream>
using namespace std;

class aaa
{
int x;
public :
void sam()
{
cout<<"I am sam"<<endl;
}

static void tom()
{
cout<<"I am tom"<<endl;
}
};

int main()
{
aaa::sam(); // will not compile
aaa::tom(); // will compile
aaa a;
a.sam(); // will compile
a.tom(); // will compile
return 0;
}
