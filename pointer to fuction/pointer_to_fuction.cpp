#include<stdio.h>
void p2f()
{
printf("Hello\n");
}
void p2f(int i,int b)
{
printf("%d\n",i+b);
}
int p2f(int f)
{
return f*f;
}
int main()
{
void (*p1)();
void (*p2)(int,int);
int (*p3)(int);
int x;
p1=p2f;
p2=p2f;
p3=p2f;
p1();
p2(10,20);
printf("%d\n",x=p3(10));
p2f();
p2f(30,30);
x=p2f(5);
printf("%d\n",x);
return 0;
}
