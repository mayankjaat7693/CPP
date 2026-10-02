/* Name : Mayank Jaat
   Date : 01 octumber 2026
   Topic: Add programm to accept command line arguments
*/
#include<iostream>
using namespace std;

int str2int(char *p)
{
int acc=0;
int negative=0;
if(*p<0)
{
negative=1;
++p;
}
while(*p!='\0')
{
if(*p<48 || *p>57)
{
return 0;
}
acc=acc*10+(*p-48);
p++;
}
if(negative)acc*=(-1);
return acc;
}

int main(int argc,char *argv[])
{
if(argc==1)
{
cout<<"Usage : add num1 num2 num3 ......"<<endl;
return 1;
}
int total,i;
for(total=0,i=1;i<argc;i++)total+=str2int(argv[i]);
cout<<"Total is "<<total<<endl;
return 0;
}
