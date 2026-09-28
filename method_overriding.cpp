/* Name : Mayank Jaat
   Date : 22 Sep 2026
   Topic: Method overriding
*/
#include<iostream>
using namespace std;

class Movie
{
public:
void interval()
{
cout<<"Interval:Have coffee for Rs.150/-"<<endl;
}
void start()
{
cout<<"Welcome"<<endl;
}
void end()
{
cout<<"Thankyou (Comeback again)"<<endl;
}
};

class JungleBook:public Movie
{
public:
void interval()
{
Movie::interval();
cout<<"and coke for Rs.80/-"<<endl;
}
void reel_one()
{
cout<<"Mongli enter in jungle"<<endl;
}
void reel_two()
{
cout<<"Bhagheera saves Mongli"<<endl;
}
};

int main()
{
JungleBook b;
b.start();
b.reel_one();
b.interval();
b.reel_two();
b.end();
return 0;
}
