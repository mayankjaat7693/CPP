/* Name : Mayank Jaat 
   Date : 03/10/2026
   Topic: Smart Pointer
*/
#include<iostream>
using namespace std;
class sm
{
int *ptr;
unsigned int sz;
public :
sm()
{
this->ptr=new int[1];
this->sz=1;
}
sm(unsigned int sz)
{
this->sz=sz;
this->ptr=new int[this->sz];
}
~sm()
{
delete []this->ptr;
}
int& operator*()
{
return *(this->ptr);
}

int& operator[](unsigned int idx)
{
if(this->sz<=idx)throw invalid_argument("index out of bound");
return this->ptr[idx];
}
};
int main()
{
sm s1;
*s1=10;
cout<<*s1<<endl;
*s1=20;
cout<<*s1<<endl;
sm s2(5);
s2[0]=100;
s2[1]=200;
s2[2]=300;
s2[3]=400;
s2[4]=500;
for(int x=0;x<5;x++)cout<<s2[x]<<endl; 





return 0;
}


