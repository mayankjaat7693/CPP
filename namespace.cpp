/* Name : Mayank Jaat
   Date : 25 August 2026
   Assignment : namespace 
*/
#include<stdio.h>
namespace college
{
class student
{
private :
int _attendence;
public :
void set_attendence(int _attendence)
{
this->_attendence=_attendence;
}
int get_attendence()
{
return this->_attendence;
}
};
}
namespace school
{
class student
{
private :
int _attendence;
public :
void set_attendence(int _attendence)
{
this->_attendence=_attendence;
}
int get_attendence()
{
return this->_attendence;
}
};
}
using namespace school;
int main()
{
school::student std1;
college::student std2;
std1.set_attendence(10);
printf("STD 1 Attendence : %d\n",std1.get_attendence());
std2.set_attendence(20);
printf("STD 2 Attendence : %d\n",std2.get_attendence());
return 0;
}




