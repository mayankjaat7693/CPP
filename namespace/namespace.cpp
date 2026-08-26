#include<stdio.h>
// example of namespace
// namespace used for categorized and separation of class function etc
namespace organization
{
namespace school
{
class student
{
public :
void std()
{
printf("I am school student\n");
}
};
}
namespace college
{
class student
{
public :
void std()
{
printf("I am college student\n");
}
};
}
}

int main()
{
organization::school::student a;
organization::college::student b;
a.std();
b.std();
return 0;
}
