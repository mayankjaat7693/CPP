#include<iostream>
#include<string.h>
using namespace std;
class str
{
private :
char *p;
public :
str()
{
}
str(const char *ptr)
{
//this->p=(char *)malloc(sizeof(char)*(strlen(ptr)+1));  (behind the new)
this->p=new char[strlen(ptr)+1];  //this is new for memory alloction in cpp
strcpy(this->p,ptr);
}
str(str&other)
{
this->p=other.p;
}
~str()           // Destructor 
{
//free(p);        behind the delete
delete []p;
}
char *getchar()
{
return this->p;
}
};

ostream&operator<<(ostream&ost,str&st)
{
ost<<st.getchar();
return ost;
}

int main()
{
str a="God is greate";
cout<<a<<endl; 
return 0;
}

