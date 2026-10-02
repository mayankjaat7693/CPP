/* Name : Mayank Jaat
   Date : 01 octumber 2026
   Topic: move file using command line arguments
*/
#include<iostream>
#include<unistd.h>
#include<string.h>
#include<errno.h>
using namespace std;

int main(int argc,char *argv[])
{
FILE *f1,*f2;
char ptr[200];
if(argc==1)
{
cout<<"move : connot move operand file missing"<<endl;
return 1;
}
if(argc==2)
{
cout<<"move : missing distination file operand file after'"<<argv[1]<<"'"<<endl;
return 1;
}
f1=fopen(argv[1],"r");
if(!f1)
{
cout<<"move : cannot stat '"<<argv[1]<<"': No such file or directory"<<endl;
return 1;
}
f2=fopen(argv[2],"w");
while(1)
{
fgets(ptr,200,f1);
if(feof(f1))break;
fputs(ptr,f2);
}
fclose(f1);
fclose(f2);
remove(argv[1]);

return 0;
}
