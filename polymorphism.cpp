/* Name : Mayank jaat 
   Date : 18 august 2026
   assignment: Polymorphism
*/

#include<stdio.h>
int sum(int first,int second,int third)
{
int sum =first+second+third;
return sum;
}

int sum(int first,int second)
{
int sum=first+second;
return sum;
}

void sum(int first)
{
int sum=first;
}

int main()
{
printf("Sum(1+2+3): %d\n",sum(10,20,30));
printf("Sum(1+2): %d\n",sum(40,40));
sum(50);
printf("Sum(1): 50\n");
return 0;
}
