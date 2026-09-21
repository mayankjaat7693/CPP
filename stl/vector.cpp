#include<iostream>
#include<string.h>
#include<stdlib.h>
#define uint unsigned int
using namespace std;
class vec_iterator;
class vec 
{
uint sz;
uint cp;
int *p;
int fhaltu;
public :
vec();
vec(const vec&);
vec(vec &&);
~vec();
vec &operator=(const vec&);
vec &operator=(vec &&);
void push_back(int);
int &operator[](int);
int size();
int capacity();
int front();
int back();
vec_iterator begin();
vec_iterator end();
};

class vec_iterator
{
uint index;
vec *v_ptr;
public :
vec_iterator(vec *,int);
int operator!=(vec_iterator);
int operator*();
void operator++();
void operator++(int);
};

vec::vec()
{
this->p=NULL;
this->cp=0;
this->sz=0;
}

vec::vec(const vec&other)
{
this->p=NULL;
this->cp=0;
this->sz=0;
if(other.p)
{
this->sz=other.sz;
this->cp=other.cp;
this->p=new int[this->cp];
memcpy(this->p,other.p,this->sz*sizeof(int));
}
}

vec::vec(vec &&other)
{
this->p=NULL;
this->cp=0;
this->sz=0;
if(other.p)
{
this->sz=other.sz;
this->cp=other.cp;
this->p=other.p;
other.p=NULL;
other.cp=0;
other.sz=0;
}
}

vec::~vec()
{
delete []this->p;
}

vec &vec::operator=(const vec&other)
{
if(!this->p && other.p)return *this;
if(!this->p)
{
this->sz=other.sz;
this->cp=other.cp;
this->p=new int[this->cp];
memcpy(this->p,other.p,this->sz*sizeof(int));
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
this->p=new int[this->cp];
}
this->sz=other.sz;
memcpy(this->p,other.p,this->sz*sizeof(int));
return *this;
}

vec &vec::operator=(vec &&other)
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
this->cp=other.cp;
this->sz=other.sz;
other.sz=0;
return *this;
}
if(this->cp<other.cp)
{
int *temp=this->p;
this->p=other.p;
other.p=temp;
int cp=this->cp;
this->cp=other.cp;
other.cp=cp;
this->sz=other.sz;
other.sz=0;
memcpy(this->p,other.p,this->sz*sizeof(int));
}
else
{
this->sz=other.sz;
other.sz=0;
memcpy(this->p,other.p,sizeof(int)*this->sz);
}
return *this;
}

void vec::push_back(int data)
{
if(!this->p)
{
this->p=new int[1];
this->sz=1;
this->cp=1;
this->p[0]=data;
return;
}
if(this->sz==this->cp)
{
int new_cp=this->cp*2;
int *temp=new int[new_cp];
memcpy(temp,this->p,sizeof(int)*this->sz);
delete []this->p;
this->cp=new_cp;
this->p=temp;
this->p[this->sz]=data;
++(this->sz);
}
else
{
this->p[this->sz]=data;
++(this->sz);
}
}

int &vec::operator[](int index)
{
if(index<0 || index>=this->sz)return fhaltu;
return this->p[index];
}

int vec::size()
{
return this->sz;
}

int vec::capacity()
{
return this->cp;
}

int vec::front()
{
return this->p[0];
}

int vec::back()
{
return this->p[this->sz-1];
}

vec_iterator vec::begin()
{
vec_iterator obj(this,0);
return obj;
}

vec_iterator vec::end()
{
vec_iterator obj(this,this->sz);
return obj;
}

vec_iterator::vec_iterator(vec *v_ptr,int index)
{
this->v_ptr=v_ptr;
this->index=index;
}

int vec_iterator::operator!=(vec_iterator other)
{
return this->index!=other.index;
}

int vec_iterator::operator*()
{
return (*(this->v_ptr))[this->index];
}

void vec_iterator::operator++()
{
++(this->index);
}

void vec_iterator::operator++(int)
{
(this->index)++;
}

int main()
{
    cout << "========== DEFAULT CONSTRUCTOR ==========\n";

    vec a;

    cout << "size     = " << a.size() << endl;
    cout << "capacity = " << a.capacity() << endl;

    cout << "\n========== PUSH_BACK ==========\n";

    for (int i = 1; i <= 20; i++)
    {
        a.push_back(i * 10);

        cout << "push_back(" << i * 10 << ")"
             << " -> size = " << a.size()
             << ", capacity = " << a.capacity()
             << endl;
    }

    cout << "\n========== FRONT / BACK ==========\n";

    cout << "front = " << a.front() << endl;
    cout << "back  = " << a.back() << endl;

    cout << "\n========== OPERATOR [] ==========\n";

    for (int i = 0; i < a.size(); i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << "\n========== OPERATOR [] MODIFY ==========\n";

    a[0] = -100;
    a[5] = -500;
    a[10] = -1000;
    a[19] = -2000;

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    cout << "\n========== FRONT / BACK AFTER MODIFY ==========\n";

    cout << "front = " << a.front() << endl;
    cout << "back  = " << a.back() << endl;

    cout << "\n========== COPY CONSTRUCTOR ==========\n";

    vec b(a);

    cout << "b size     = " << b.size() << endl;
    cout << "b capacity = " << b.capacity() << endl;

    cout << "b elements:\n";

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;

    cout << "\n========== COPY INDEPENDENCE TEST ==========\n";

    b[0] = 9999;
    b[1] = 8888;

    cout << "a: ";

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    cout << "b: ";

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;

    cout << "\n========== COPY ASSIGNMENT ==========\n";

    vec c;

    for (int i = 100; i <= 105; i++)
    {
        c.push_back(i);
    }

    cout << "Before assignment:\n";

    cout << "c: ";

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;

    c = a;

    cout << "After c = a:\n";

    cout << "c: ";

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;

    cout << "\n========== COPY ASSIGNMENT SELF TEST ==========\n";

    c = c;

    cout << "c after c = c:\n";

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;

    cout << "\n========== MOVE CONSTRUCTOR ==========\n";

    vec d(std::move(a));

    cout << "d size     = " << d.size() << endl;
    cout << "d capacity = " << d.capacity() << endl;

    cout << "d elements:\n";

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }

    cout << endl;

    cout << "\n========== MOVE ASSIGNMENT ==========\n";

    vec e;

    e.push_back(111);
    e.push_back(222);
    e.push_back(333);

    e = std::move(b);

    cout << "e size     = " << e.size() << endl;
    cout << "e capacity = " << e.capacity() << endl;

    cout << "e elements:\n";

    for (int i = 0; i < e.size(); i++)
    {
        cout << e[i] << " ";
    }

    cout << endl;

    cout << "\n========== ITERATOR BEGIN / END ==========\n";

    vec_iterator it = e.begin();
    vec_iterator last = e.end();

    while (it != last)
    {
        cout << *it << " ";
        ++it;
    }

    cout << endl;

    cout << "\n========== POSTFIX ITERATOR ==========\n";

    it = e.begin();

    while (it != last)
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    cout << "\n========== MODIFY USING OPERATOR [] ==========\n";

    for (int i = 0; i < e.size(); i++)
    {
        e[i] *= -1;
    }

    cout << "e after modification:\n";

    for (vec_iterator i = e.begin(); i != e.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;

    cout << "\n========== LARGE PUSH TEST ==========\n";

    vec big;

    for (int i = 0; i < 1000; i++)
    {
        big.push_back(i);
    }

    cout << "size     = " << big.size() << endl;
    cout << "capacity = " << big.capacity() << endl;

    cout << "first 10:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << big[i] << " ";
    }

    cout << endl;

    cout << "last 10:\n";

    for (int i = big.size() - 10; i < big.size(); i++)
    {
        cout << big[i] << " ";
    }

    cout << endl;

    cout << "\n========== ITERATOR LARGE TEST ==========\n";

    int count = 0;

    for (vec_iterator i = big.begin(); i != big.end(); i++)
    {
        if (count < 10 || count >= big.size() - 10)
        {
            cout << *i << " ";
        }

        count++;
    }

    cout << "\niterator count = " << count << endl;

    cout << "\n========== END ==========\n";

    return 0;
}


