//example of insertion operator << (less than less than)
#include<stdio.h>
class LessThan
{
public :
void operator<<(int i)
{
printf("No : %d",i);
}
void new_line()
{
printf("\n");
}
};
int main()
{
LessThan p1;
p1<<100; // :: scope resolution operator
p1.new_line();
p1<<200; 
p1.new_line();
return 0;
}
