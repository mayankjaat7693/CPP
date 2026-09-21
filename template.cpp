/* Name : Mayank Jaat
   Date : 03 september 2026
   Assignment : Template for (function and class)
*/
#include<iostream>
using namespace std;

template<class kalia>
void print(kalia prnt)
{
cout<<sizeof(kalia)<<" : "<<prnt<<endl;
}

template<typename T>
class _print
{
T data;
public :
_print(T data)
{
this->data=data;
}

void set_data(T data)
{
this->data=data;
}
T get_data()
{
cout<<sizeof(T)<<" : ";
return this->data;
}
};

int main()
{
print(10);
print("Mayank");
_print pp(100);
cout<<pp.get_data()<<endl;
pp.set_data(100);
cout<<pp.get_data()<<endl;
_print cc("mayank");
cout<<cc.get_data()<<endl;
cc.set_data("Mayank jaat");
cout<<cc.get_data()<<endl;
return 0;
}
