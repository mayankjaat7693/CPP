/* Name : Mayank Jaat
   Date : 25 August 2026
   Assignment : operator overloading (overlaoding insertion operator <<) (overloading extraction operator >>)
*/
#include<stdio.h>
class stdd
{
public :
void operator<<(int data)
{
printf("%d\n",data);
}
int &operator>>(int &data)
{
scanf("%d",&data);
return data;
}
};

int main()
{
int a;
stdd cin,cout;
cin>>a;
cout<<a;
return 0;
}


