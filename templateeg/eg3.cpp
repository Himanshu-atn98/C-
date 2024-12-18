#include<iostream>
using namespace std;
template<class T1,class T2>
class myClass
{
public:
T1 data1;
T2 data2;
myClass()
{
}
myClass(T1 a,T2 b)
{
data1=a;
data2=b;
}
void display()
{
cout<<this->data1<<endl<<this->data2<<endl;
cout<<"Data1:"<<data1<<endl;
cout<<"Data2:"<<data2<<endl;
}
};
int main()
{
myClass<int,char> object1(1,'c');
myClass<int,char> object2;
object2.data1=10;
object2.data2='H';
object1.display();
object2.display();
return 0;
}