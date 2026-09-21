#include<iostream>
#include<string.h>
using namespace std;

class stk
{
int sz;
int cp;
int *p;
public :
stk();
stk(int *);
stk(const stk&);
stk(stk&&);
~stk();
stk &operator=(const stk&);
stk &operator=(stk&&);
void push(int data);
void pop();
int top();
int size();
int empty();
int capacity();
};

stk::stk()
{
this->sz=0;
this->cp=0;
this->p=NULL;
}

stk::stk(int *arr)
{
this->p=arr;
this->sz=sizeof(arr)/sizeof(arr[0]);
}

stk::stk(const stk&other)
{
this->sz=0;
this->cp=0;
this->p=NULL;
if(other.p)
{
this->sz=other.sz;
this->cp=other.cp;
this->p=new int[this->cp];
memcpy(this->p,other.p,sizeof(int)*this->sz);
}
}

stk::stk(stk&&other)
{
this->sz=0;
this->cp=0;
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

stk::~stk()
{
delete []this->p;
}

stk &stk::operator=(const stk&other)
{
if(!this->p && !other.p)return *this;
if(!this->p)
{
this->cp=other.cp;
this->sz=other.sz;
this->p=new int[this->cp];
memcpy(this->p,other.p,sizeof(int)*this->sz);
return *this;
}
if(!other.p)
{
this->sz=0;
return *this;
}
if(this->cp<other.cp)
{
delete []this->p;
this->cp=other.cp;
this->sz=other.sz;
this->p=new int[this->cp];
memcpy(this->p,other.p,sizeof(int)*this->sz);
}
else
{
this->sz=other.sz;
memcpy(this->p,other.p,sizeof(int)*this->sz);
}
return *this;
}

stk &stk::operator=(stk&&other)
{
if(!this->p && !other.p)return *this;
if(!other.p)
{
this->sz=0;
return *this;
}
if(!this->p)
{
this->p=other.p;
this->sz=other.sz;
this->cp=other.cp;
other.p=NULL;
other.sz=0;
other.cp=0;
return *this;
}
if(this->cp<other.cp)
{
int *tmp=this->p;
this->p=other.p;
other.p=tmp;
int cp=this->cp;
this->cp=other.cp;
other.cp=cp;
this->sz=other.sz;
other.sz=0;
}
else
{
this->sz=other.sz;
memcpy(this->p,other.p,sizeof(int)*this->sz);
delete []other.p;
other.p=NULL;
other.sz=0;
other.cp=0;
}
return *this;
}

void stk::push(int data)
{
if(!this->p)
{
this->p=new int[1];
this->p[this->sz]=data;
this->sz=1;
this->cp=1;
}
if(this->sz==this->cp)
{
int new_cp=this->cp*2;
int *tmp=new int[new_cp];
memcpy(tmp,this->p,sizeof(int)*this->sz);
delete []this->p;
this->p=tmp;
this->p[this->sz]=data;
this->cp=new_cp;
++(this->sz);
}
else
{
this->p[this->sz]=data;
++(this->sz);
}
}

void stk::pop()
{
--(this->sz);
}

int stk::top()
{
return this->p[this->sz-1];
}

int stk::size()
{
return this->sz;
}

int stk::empty()
{
return this->sz==0;
}

int stk::capacity()
{
return this->cp;
}

int main()
{
    cout << "===== DEFAULT CONSTRUCTOR =====\n";

    stk a;

    cout << "size     = " << a.size() << endl;
    cout << "empty    = " << a.empty() << endl;
    cout << "capacity = " << a.capacity() << endl;


    cout << "\n===== PUSH =====\n";

    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);

    cout << "size     = " << a.size() << endl;
    cout << "top      = " << a.top() << endl;
    cout << "empty    = " << a.empty() << endl;
    cout << "capacity = " << a.capacity() << endl;


    cout << "\n===== POP =====\n";

    a.pop();
    cout << "top after pop = " << a.top() << endl;

    a.pop();
    cout << "top after pop = " << a.top() << endl;

    cout << "size = " << a.size() << endl;


    cout << "\n===== COPY CONSTRUCTOR =====\n";

    stk b(a);

    cout << "b.top      = " << b.top() << endl;
    cout << "b.size     = " << b.size() << endl;
    cout << "b.capacity = " << b.capacity() << endl;


    cout << "\n===== COPY INDEPENDENCE TEST =====\n";

    a.push(100);

    cout << "a.top = " << a.top() << endl;
    cout << "b.top = " << b.top() << endl;


    cout << "\n===== COPY ASSIGNMENT =====\n";

    stk c;

    c.push(999);
    c.push(888);

    c = a;

    cout << "c.top      = " << c.top() << endl;
    cout << "c.size     = " << c.size() << endl;
    cout << "c.capacity = " << c.capacity() << endl;


    cout << "\n===== INT* CONSTRUCTOR =====\n";

    int arr[] = {1, 2, 3, 4, 5, -1};

    stk d(arr);

    cout << "d.top      = " << d.top() << endl;
    cout << "d.size     = " << d.size() << endl;
    cout << "d.capacity = " << d.capacity() << endl;


    cout << "\n===== MOVE CONSTRUCTOR =====\n";

    stk e(static_cast<stk&&>(d));

    cout << "e.top      = " << e.top() << endl;
    cout << "e.size     = " << e.size() << endl;
    cout << "e.capacity = " << e.capacity() << endl;


    cout << "\n===== MOVE ASSIGNMENT =====\n";

    stk f;

    f.push(111);
    f.push(222);

    f = static_cast<stk&&>(e);

    cout << "f.top      = " << f.top() << endl;
    cout << "f.size     = " << f.size() << endl;
    cout << "f.capacity = " << f.capacity() << endl;


    cout << "\n===== CAPACITY GROWTH =====\n";

    stk x;

    for(int i = 1; i <= 20; i++)
    {
        x.push(i);

        cout << "push " << i
             << " | size = " << x.size()
             << " | capacity = " << x.capacity()
             << " | top = " << x.top()
             << endl;
    }


    cout << "\n===== POP EVERYTHING =====\n";

    while(!x.empty())
    {
        cout << "top = " << x.top() << endl;
        x.pop();
    }

    cout << "empty    = " << x.empty() << endl;
    cout << "size     = " << x.size() << endl;
    cout << "capacity = " << x.capacity() << endl;


    cout << "\n===== EMPTY STACK =====\n";

    stk z;

    cout << "empty = " << z.empty() << endl;

    // Agar tumhari implementation empty stack par
    // top() / pop() handle karti hai tab test karna:
    //
    // cout << z.top() << endl;
    // z.pop();


    cout << "\n===== SELF ASSIGNMENT =====\n";

    a = a;

    cout << "a.top  = " << a.top() << endl;
    cout << "a.size = " << a.size() << endl;


    cout << "\n===== DESTRUCTOR TEST =====\n";

    {
        stk temp;

        temp.push(100);
        temp.push(200);
        temp.push(300);

        cout << "temp.top  = " << temp.top() << endl;
        cout << "temp.size = " << temp.size() << endl;
    }

    cout << "\n===== TEST COMPLETE =====\n";

    return 0;
}
