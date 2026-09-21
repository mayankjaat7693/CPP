/* Name : Mayank Jaat
   Date : 22 August 2026
   Assignment : Call by refernce (creating alias)
*/
#include<stdio.h>

void add_and_sub(int el1,int el2,int &ptr1,int &ptr2)
{
ptr1=el1+el2;
ptr2=el1-el2;
}

int main()
{
int a,b,x,y;
a=10;
b=20;
add_and_sub(a,b,x,y);
printf("Add : %d\n",x);
printf("Sub : %d\n",y);
return 0;
}
