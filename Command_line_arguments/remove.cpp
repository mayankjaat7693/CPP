/* Name : Mayank Jaat
   Date : 01 octumber 2026
   Topic: remove file using command line arguments
*/
#include<iostream>
#include<unistd.h>
#include<string.h>
#include<errno.h>
using namespace std;

int main(int argc,char *argv[])
{
if(argc==1)
{
cout<<"remove : connot remove operand file missing"<<endl;
return 1;
}
for(int i=1;i<argc;i++)
{
int result=remove(argv[1]);
if(result!=0)
{
cout<<"Error No: "<<errno<<endl;
cout<<"Error: "<<strerror(errno)<<endl;
}
}
return 0;
}
