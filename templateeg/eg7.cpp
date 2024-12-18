#include<iostream>
using namespace std;
template<class T>
class myClass
{
public:
T data;
myClass(T a)
{
data=a;
}
void display();
};
template<class T>
void myClass<T>::display()
{
cout<<"Data:"<<data<<endl;
}
int main()
{
myClass<float> m(4.57);
m.display();
return 0;
}