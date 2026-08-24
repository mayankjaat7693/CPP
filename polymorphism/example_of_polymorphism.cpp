#include<stdio.h>
int sum(int a,int b)              
{
return a+b;
}

int sum(int x,int y,int z)
{
return x+y+z;
}

int main()
{
printf("%d\n",sum(10,30));
printf("%d\n",sum(20,40,60));
return 0;
}
