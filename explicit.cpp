/* Name : Mayank Jaat 
   Date : 03/10/2026
   Topic: Explicit (=delete)
*/
#include<iostream>
using namespace std;
class aaa
{
public :
explicit aaa(int x)
{
}
aaa(const aaa&)=delete;  // markes as deleted
aaa(aaa&&)=delete;        // marked as deleted
aaa& operator=(const aaa&)=delete;  // marked as deleted
aaa& operator=(aaa&)=delete;
};
int main()
{
aaa a=10;  // will not compile
aaa a(10); // will compile
aaa b(a);   
aaa c(move(a));
aaa d=a;
aaa e=move(a);
return 0;
}


