/* Name : Mayank Jaat
   Date : 01 octumber 2026
   Topic: Copy files using command line arguments
*/
#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
FILE *f1,*f2;
char ptr[100];
if(argc==1)
{
cout<<"copy: missing file operand"<<endl;
return 1;
}
if(argc==2)
{
cout<<"cp: missing destination file operand after '"<<argv[1]<<"'"<<endl;
return 1;
}
f1=fopen(argv[1],"r");
f2=fopen(argv[2],"w");
if(!f1)
{
cout<<"cp: cannot stat 'eg1.cpp': No such file or directory"<<endl;
fclose(f2);
return 1;
}
while(1)
{
fgets(ptr,100,f1);
if(feof(f1))break;
fputs(ptr,f2);
}
fclose(f1);
fclose(f2);
return 0;
}

