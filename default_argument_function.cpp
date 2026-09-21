/* Name : Mayank Jaat
   Date : 03 september 2026
   Assignment : function with default argument
*/
#include<iostream>
using namespace std;

void sum(int p,int q=0,int r=0)
{
cout<<"Sum : "<<p+q+r<<endl;
}

/*       alternative functions (create compiler)  so we do not write alternative functions

void sum(int p)
{
cout<<"Sum : "<<p+0+0<<endl;
}

void sum(int p,int q)
{
cout<<"Sum : "<<p+q+0<<endl;
}

void sum(int p,int q,int r)
{
cout<<"Sum : "<<p+q+r<<endl;
}
*/

int main()
{
sum(10);
sum(10,20);
sum(10,20,30);
return 0;
}
