#include<stdio.h>
void add_and_subtract(int e,int f,int &p,int &q)
{
p=e+f;
q=e-f;
}
int main()
{
int x,y,a,b;
x=10;
y=5;
add_and_subtract(x,y,a,b);
printf("Total is %d\n",a);
printf("Difference is %d\n",b);
return 0;
}
