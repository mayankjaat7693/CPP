#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#define uint unsigned int 
using namespace std;
class str
{
private :
uint cp;
uint sz;
char fhaltu;
char *p;
public :
str();
str(const char *ptr);
str(string s);
str(const str&other);
str(str&&other);
~str();
str &operator=(const char *ptr);
str &operator=(string s);
str &operator=(const str&other);
str &operator=(str&&other);
int operator==(const char *ptr);
int operator!=(const char *ptr);
int operator<(const char *ptr);
int operator<=(const char *ptr);
int operator>(const char *ptr);
int operator>=(const char *ptr);
int operator==( string s);
int operator!=(string s);
int operator<(string s);
int operator<=( string s);
int operator>(string s);
int operator>=(string s);
int operator==(const str&other);
int operator!=(const str&other);
int operator<(const str&other);
int operator<=(const str&other);
int operator>(const str&other);
int operator>=(const str&other);
str operator+(const char *ptr);
str operator+(string s);
str operator+(const str&other);
char &operator[](int index);
void insert(int index,int data);
char at(int index);
char front();
char end();
int capacity();
int size();
char *c_str();
};

char *str::c_str()
{
if(!this->p)return "";
return this->p;
}

str::str()
{
this->cp=0;
this->sz=0;
this->p=NULL;
}
str::str(const char *ptr)
{
this->cp=0;
this->sz=0;
this->p=NULL;
if(ptr)
{
this->cp=strlen(ptr)+1;
this->sz=strlen(ptr);
this->p=new char[this->cp];
strcpy(this->p,ptr);
}
}

str::str(string s)
{
this->cp=0;
this->sz=0;
this->p=NULL;
if(s.c_str())
{
this->cp=strlen(s.c_str())+1;
this->sz=strlen(s.c_str());
this->p=new char[this->cp];
strcpy(this->p,s.c_str());
}
}
str::str(const str&other)
{
this->cp=0;
this->sz=0;
this->p=NULL;
if(other.p)
{
this->cp=other.cp;
this->sz=other.sz;
this->p=new char[this->cp];
strcpy(this->p,other.p);
}
}

str::str(str&&other)
{
this->cp=0;
this->sz=0;
this->p=NULL;
if(other.p)
{
this->cp=other.cp;
this->sz=other.sz;
this->p=other.p;
other.p=NULL;
other.sz=0;
other.cp=0;
}
}

str::~str()
{
delete []this->p;
}

str &str::operator=(const char *ptr)
{
if(!this->p && !ptr)return *this;
if(!this->p)
{
this->cp=strlen(ptr)+1;
this->sz=strlen(ptr);
this->p=new char[this->cp];
strcpy(this->p,ptr);
return *this;
}
if(!ptr)
{
this->p[0]='\0';
this->sz=0;
return *this;
}
int required_memory=strlen(ptr)+1;
if(required_memory>this->cp)
{
delete []this->p;
this->cp=required_memory;
this->p=new char[this->cp];
}
this->sz=strlen(ptr);
strcpy(this->p,ptr);
return *this;
}

str &str::operator=(string s)
{
if(!this->p && !s.c_str())return *this;
if(!this->p)
{
this->cp=strlen(s.c_str())+1;
this->sz=strlen(s.c_str());
this->p=new char[this->cp];
strcpy(this->p,s.c_str());
return *this;
}
if(!s.c_str())
{
this->p[0]='\0';
this->sz=0;
return *this;
}
int required_memory=strlen(s.c_str())+1;
if(required_memory>this->cp)
{
delete []this->p;
this->cp=required_memory;
this->p=new char[this->cp];
}
this->sz=strlen(s.c_str());
strcpy(this->p,s.c_str());
return *this;
}

str &str::operator=(const str&other)
{
if(!this->p && !other.p)return *this;
if(!this->p)
{
this->cp=other.cp;
this->sz=other.sz;
this->p=new char[this->cp];
strcpy(this->p,other.p);
return *this;
}
if(!other.p)
{
this->p[0]='\0';
this->sz=0;
}
if(this->cp<this->sz)
{
delete []this->p;
this->cp=other.cp;
this->p=new char[this->cp];
}
this->sz=other.sz;
strcpy(this->p,other.p);
return *this;
}

str &str::operator=(str&&other)
{
if(!this->p && !other.p)return *this;
if(!this->p)
{
this->p=other.p;
this->cp=other.cp;
this->sz=other.sz;
other.p=NULL;
other.sz=0;
other.cp=0;
return *this;
}
if(!other.p)
{
this->p[0]='\0';
this->sz=0;
}
if(this->cp<other.cp)
{
delete []this->p;
this->cp=other.cp;
this->sz=other.sz;
this->p=other.p;
other.p=NULL;
other.sz=0;
other.cp=0;
}
else
{
strcpy(this->p,other.p);
this->sz=other.sz;
delete []other.p;
other.p=NULL;
other.sz=0;
other.cp=0;
}
return *this;
}

int str::operator==(const char *ptr)
{
int result=strcmp(this->p,ptr);
return result==0;
}

int str::operator!=(const char *ptr)
{
int result=strcmp(this->p,ptr);
return result!=0;
}

int str::operator<(const char *ptr)
{
int result=strcmp(this->p,ptr);
return result<0;
}

int str::operator<=(const char *ptr)
{
int result=strcmp(this->p,ptr);
return result<=0;
}

int str::operator>(const char *ptr)
{
int result=strcmp(this->p,ptr);
return result>0;
}

int str::operator>=(const char *ptr)
{
int result=strcmp(this->p,ptr);
return result>=0;
}

int str::operator==(string s)
{
int result=strcmp(this->p,s.c_str());
return result==0;
}

int str::operator!=(string s)
{
int result=strcmp(this->p,s.c_str());
return result!=0;
}

int str::operator<(string s)
{
int result=strcmp(this->p,s.c_str());
return result<0;
}

int str::operator<=(string s)
{
int result=strcmp(this->p,s.c_str());
return result<=0;
}

int str::operator>(string s)
{
int result=strcmp(this->p,s.c_str());
return result>0;
}

int str::operator>=(string s)
{
int result=strcmp(this->p,s.c_str());
return result>=0;
}

int str::operator==(const str&other)
{
int result=strcmp(this->p,other.p);
return result==0;
}

int str::operator!=(const str&other)
{
int result=strcmp(this->p,other.p);
return result!=0;
}

int str::operator<(const str&other)
{
int result=strcmp(this->p,other.p);
return result<0;
}

int str::operator<=(const str&other)
{
int result=strcmp(this->p,other.p);
return result<=0;
}

int str::operator>(const str&other)
{
int result=strcmp(this->p,other.p);
return result>0;
}

int str::operator>=(const str&other)
{
int result=strcmp(this->p,other.p);
return result>=0;
}

str str::operator+(const char *ptr)
{
str obj;
if(!this->p && ptr)return obj;
if(!this->p)
{
obj=ptr;
return obj;
}
if(!ptr)
{
obj=*this;
return obj;
}
obj.cp=this->sz+strlen(ptr)+1;
obj.sz=obj.cp-1;
obj.p=new char[obj.cp];
strcpy(obj.p,this->p);
strcat(obj.p,ptr);
return obj;
}

str str::operator+(string s)
{
str obj;
if(!this->p && !s.c_str())return obj;
if(!this->p)
{
obj=s;
return obj;
}
if(!s.c_str())
{
obj=*this;
return obj;
}
obj.cp=this->sz+strlen(s.c_str())+1;
obj.sz=obj.cp-1;
obj.p=new char[obj.cp];
strcpy(obj.p,this->p);
strcat(obj.p,s.c_str());
return obj;
}

str str::operator+(const str&other)
{
str obj;
if(!this->p && other.p)return obj;
if(!this->p)
{
obj=other;
return obj;
}
if(!other.p)
{
obj=*this;
return obj;
}
obj.cp=this->sz+other.sz+1;
obj.sz=this->sz+other.sz;
obj.p=new char[obj.cp];
strcpy(obj.p,this->p);
strcat(obj.p,other.p);
return obj;
}

char &str::operator[](int index)
{
fhaltu=0;
if(index<0 || index>=this->sz)return fhaltu;
return this->p[index];
}

void str::insert(int index,int data)
{
if(index<0 || index>=this->sz)return;
this->p[index]=data;
}

char str::at(int index)
{
fhaltu=0;
if(index<0 || index>=this->sz)return fhaltu;
return this->p[index];
}

char str::front()
{
return this->p[0];
}

char str::end()
{
return this->p[this->sz-1];
}

int str::capacity()
{
return this->cp;
}

int str::size()
{
return this->sz;
}

ostream &operator<<(ostream&jj,str&mm)
{
char *ss=mm.c_str();
if(ss)jj<<mm.c_str();
return jj;
}

int main()
{
    cout << "========== DEFAULT / NULL TEST ==========\n";

    str a;

    cout << "size     : " << a.size() << endl;
    cout << "capacity : " << a.capacity() << endl;


    cout << "\n========== CONSTRUCTOR TEST ==========\n";

    str b("Hello");
    cout << "b : " << b.c_str() << endl;

    string s = "World";
    str c(s);
    cout << "c : " << c.c_str() << endl;

    str d(b);
    cout << "d : " << d.c_str() << endl;

    str e(std::move(d));
    cout << "e : " << e.c_str() << endl;


    cout << "\n========== NULL OBJECT ASSIGNMENT ==========\n";

    str x;

    x = "Hello";
    cout << "char* : " << x.c_str() << endl;

    x = string("World");
    cout << "string: " << x.c_str() << endl;

    x = b;
    cout << "str   : " << x.c_str() << endl;

    str y;
    y = std::move(x);

    cout << "move  : " << y.c_str() << endl;


    cout << "\n========== COMPARISON ==========\n";

    str p("Hello");

    cout << (p == "Hello") << endl;
    cout << (p != "World") << endl;
    cout << (p < "World") << endl;
    cout << (p <= "Hello") << endl;
    cout << (p > "Apple") << endl;
    cout << (p >= "Hello") << endl;


    string q = "Hello";

    cout << (p == q) << endl;
    cout << (p != q) << endl;
    cout << (p < q) << endl;
    cout << (p <= q) << endl;
    cout << (p > q) << endl;
    cout << (p >= q) << endl;


    str r("Hello");

    cout << (p == r) << endl;
    cout << (p != r) << endl;
    cout << (p < r) << endl;
    cout << (p <= r) << endl;
    cout << (p > r) << endl;
    cout << (p >= r) << endl;


    cout << "\n========== OPERATOR + ==========\n";

    str plus1 = p + " World";
    cout << plus1.c_str() << endl;

    str plus2 = p + string(" C++");
    cout << plus2.c_str() << endl;

    str plus3 = p + r;
    cout << plus3.c_str() << endl;


    cout << "\n========== [] TEST ==========\n";

    str arr("ABCDEFGHIJ");

    cout << arr[0] << endl;
    cout << arr[5] << endl;
    cout << arr[9] << endl;

    arr[0] = 'X';
    arr[5] = 'Y';
    arr[9] = 'Z';

    cout << arr.c_str() << endl;


    cout << "\n========== INSERT TEST ==========\n";

    str ins("ABCDE");

    cout << ins.c_str() << endl;

    ins.insert(0, 'X');
    cout << ins.c_str() << endl;

    ins.insert(3, 'Y');
    cout << ins.c_str() << endl;

    ins.insert(ins.size(), 'Z');
    cout << ins.c_str() << endl;


    cout << "\n========== AT TEST ==========\n";

    str atTest("0123456789");

    cout << atTest.at(0) << endl;
    cout << atTest.at(5) << endl;
    cout << atTest.at(9) << endl;


    cout << "\n========== FRONT / END ==========\n";

    str fe("Hello");

    cout << "front : " << fe.front() << endl;
    cout << "end   : " << fe.end() << endl;


    cout << "\n========== SIZE / CAPACITY ==========\n";

    str sc("Hello World");

    cout << "string   : " << sc.c_str() << endl;
    cout << "size     : " << sc.size() << endl;
    cout << "capacity : " << sc.capacity() << endl;


    cout << "\n========== EMPTY -> ASSIGN -> MODIFY ==========\n";

    str empty;

    cout << "initial size     : " << empty.size() << endl;
    cout << "initial capacity : " << empty.capacity() << endl;

    empty = "ABC";

    cout << "after assign : " << empty.c_str() << endl;

    empty[0] = 'X';

    cout << "after []     : " << empty.c_str() << endl;

    empty.insert(1, 'Y');

    cout << "after insert : " << empty.c_str() << endl;

    cout << "size         : " << empty.size() << endl;
    cout << "capacity     : " << empty.capacity() << endl;


    cout << "\n========== COPY INDEPENDENCE ==========\n";

    str original("Hello");
    str copy(original);

    copy[0] = 'Y';

    cout << "original : " << original.c_str() << endl;
    cout << "copy     : " << copy.c_str() << endl;


    cout << "\n========== MOVE CONSTRUCTOR ==========\n";

    str source("Move Testing");

    str destination(std::move(source));

    cout << "destination : " << destination.c_str() << endl;
    cout << "source      : [" << source.c_str() << "]" << endl;


    cout << "\n========== MOVE ASSIGNMENT ==========\n";

    str m1("First");
    str m2("Second");

    m2 = std::move(m1);

    cout << "m2 : " << m2.c_str() << endl;
    cout << "m1 : [" << m1.c_str() << "]" << endl;


    cout << "\n========== SELF ASSIGNMENT ==========\n";

    str self("SelfTest");

    self = self;

    cout << self.c_str() << endl;


    cout << "\n========== CHAIN + ==========\n";

    str chain("A");

    str result = chain + "B" + string("C") + str("D");

    cout << result.c_str() << endl;


    cout << "\n========== FINAL ==========\n";

    cout << "result   : " << result.c_str() << endl;
    cout << "size     : " << result.size() << endl;
    cout << "capacity : " << result.capacity() << endl;

    return 0;
}
