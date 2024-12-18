#include<iostream>
using namespace std;
template<class t1=int,class t2=float,class t3=char>
class myClass
{
public:
t1 a;
t2 b;
t3 c;
myClass(t1 x,t2 y,t3 z)
{
a=x;
b=y;
c=z;
}
void display()
{
cout<<"Value of a is:"<<a<<endl;
cout<<"Value of b is:"<<b<<endl;
cout<<"Value of c is:"<<c<<endl;
}
};
int main()
{
myClass<> m1(4,6.5,'H');
m1.display();

myClass<float,char,char> m2(3.4,'A','T');
m2.display();
return 0;
}
