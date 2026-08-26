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
using namespace school;
using namespace college;
}
using namespace organization;
int main()
{
student a;
student b;
a.std();
b.std();
return 0;
}
