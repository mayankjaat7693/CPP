/* Name : Mayank Jaat 
   Date : 03/10/2026
   Topic: Exception handling
*/
#include<iostream>
using namespace std;

int divide(int p,int q)
{
if(q==0)throw invalid_argument("Cannot divide with zero"); // exception raise 
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
}catch(invalid_argument&ia)
{
cout<<ia.what()<<endl;
cout<<"Enter non Zero number: ";
cin>>y;
t=do_something(x,y,z);
cout<<t<<endl;
}
return 0;
}
