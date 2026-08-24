#include<stdio.h>
void _add_and_subtract(int e,int f,int *g,int *h)
{
*g=e+f;
*h=e-f;
}
void add_and_subtract(int *p,int *q)
{
int x,y;
x=10;
y=5;
_add_and_subtract(x,y,p,q);
}
int main()
{
int n,m;
add_and_subtract(&n,&m);
printf("Total is %d\n",n);
printf("Difference is %d\n",m);
return 0;
}
