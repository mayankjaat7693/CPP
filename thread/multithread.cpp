/* Name : Mayank Jaat 
   Date : 03/10/2026
   Topic: Multithreading ( parallel programming )
*/
#include<thread>
#include<iostream>
using namespace std;
void sam()
{
for(int x=1;x<=50;x++)cout<<x<<" ";
}
int main()
{
thread t(sam);
for(int x=1001;x<=1050;x++)cout<<x<<" ";
t.join();
return 0;
}
