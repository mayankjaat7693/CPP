#include<stdio.h>
void _add_and_subtract(int e,int f,int &p,int &q)
{
p=e+f;
q=e-f;
}
void add_and_subtract(int &s,int &i)
{
int x,y;
x=10;
y=5;
_add_and_subtract(x,y,s,i);
}
int main()
{
int a,b;
add_and_subtract(a,b);
printf("Total is %d\n",a);
printf("Difference is %d\n",b);
return 0;
}
