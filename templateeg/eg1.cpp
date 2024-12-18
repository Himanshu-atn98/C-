#include<iostream>
using namespace std;
class Vector
{
public:
int *arr;
int size;
Vector(int m)
{
size=m;
arr=new int[3];
}
int sumOfdotProduct(Vector &v)
{
int d=0;
for(int i=0;i<size;i++)
{
d+=this->arr[i]*v.arr[i];
}
return d;
}
};
int main()
{
Vector v1(3);
v1.arr[0]=4;
v1.arr[1]=3;
v1.arr[2]=1;

Vector v2(2);
v2.arr[0]=2;
v2.arr[1]=5;
v2.arr[2]=6;
int a=v1.sumOfdotProduct(v2);
cout<<"Sum of the product:"<<a<<endl;
return 0;
}