/* Name : Mayank Jaat
   Date : 01 octumber 2026
   Topic: Pure Virtual Function ( abstract class )
*/
#include<iostream>
using namespace std;

int divide(int p,int q)
{
if(q==0)throw string("Cannot divide by Zero");
return p/q;
}

int do_something(int e,int f,int g)
{
return divide(e,f)*g;
}

int main()
{
int x,y,z,t;
cout<<"Enter first number: ";
cin>>x;
cout<<"Enter second number: ";
cin>>y;
cout<<"Enter third number: ";
cin>>z;
try
{
t=do_something(x,y,z);
cout<<t<<endl;
}catch(string &s)
{
cout<<s<<endl;
}
return 0;
}
