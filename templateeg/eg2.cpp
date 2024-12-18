#include<iostream>
using namespace std;
template<class T>
class Vector
{
public:
T *arr;
int size;
Vector(int m)
{
size=m;
arr=new T[size];
}
T sumOfdotProduct(Vector &v)
{
T d=0;
for(int i=0;i<size;i++)
{
d+=this->arr[i]*v.arr[i];
}
return d;
}
};
int main()
{
Vector<int> v1(3);
v1.arr[0]=1;
v1.arr[1]=2;
v1.arr[2]=3;

Vector<int> v2(3);
v2.arr[0]=8;
v2.arr[1]=7;
v2.arr[2]=6;
int a=v1.sumOfdotProduct(v2);
cout<<"Sum of the product integer numbers:"<<a<<endl;

Vector<float> v3(3);
v3.arr[0]=1.2;
v3.arr[1]=2.3;
v3.arr[2]=3.4;

Vector<float> v4(3);
v4.arr[0]=8.5;
v4.arr[1]=7.4;
v4.arr[2]=6.3;
float b=v3.sumOfdotProduct(v4);
cout<<"Sum of the product of fractional numbers:"<<b<<endl;
return 0;
}