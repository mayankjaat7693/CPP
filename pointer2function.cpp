/* Name : Mayank Jaat
   Date : 25 August 2026
   Assignment : pointer to function
*/
#include<stdio.h>

namespace std
{
void newline()
{
printf("\n");
}
class stdd
{
public :
stdd &operator<<(int data)
{
printf("%d\n",data);
return *this;
}
stdd &operator>>(int &data)
{
scanf("%d",&data);
return *this;
}
stdd &operator<<(void (*ptr)())
{
ptr();
return *this;
}
};
}
using namespace std;
int main()
{
int a;
stdd cin,cout;
cin>>a<<newline;
cout<<a<<newline;
return 0;
}


