/* Name : Mayank Jaat
   Date : 22 Sep 2026
   Topic: Dynamic Memory Allocation 
*/
#include<iostream>
using namespace std;

int main()
{
int req;
int *m;
cout<<"Enter how many your requirement: ";
cin>>req;

m=new int[req];
// behind the scene m=(int *)malloc(sizeof(int)*req);

for(int i=0;i<req;i++)
{
cout<<"Enter a number: ";
cin>>m[i];
}

int total=0;
for(int i=0;i<req;i++)
{
cout<<m[i]<<endl;
total+=m[i];
}
cout<<"Total: "<<total<<endl;
return 0;
}

