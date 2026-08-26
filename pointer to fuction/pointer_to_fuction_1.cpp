#include<stdio.h>
namespace organization
{
void p2f()
{
printf("Hello\n");
}
void p2f(int a,int b)
{
printf("%d\n",a+b);
}
int p2f(int c)
{
return c*c;
}
namespace school
{
class student
{
public :
void caller(void (*p1)())
{
p1();
}
void caller(void(*p1)(int,int),int a,int b)
{
p1(a,b);
}
int caller(int (*p1)(int),int c)
{
return p1(c);
}
};
}
using namespace school;
student call;
}
using namespace organization;
int main()
{
call.caller(p2f);
call.caller(p2f,10,20);
int x=call.caller(p2f,10);
printf("%d\n",x);
return 0;
}
