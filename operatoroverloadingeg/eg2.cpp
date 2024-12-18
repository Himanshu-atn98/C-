#include<iostream>
using namespace std;
class Complex
{
private:
int x,y;
public:
void setData(int a,int b)
{
x=a;
y=b;
}
void showData()
{
cout<<"x:"<<x<<" and "<<"y:"<<y<<endl;
}
Complex add(Complex &c)
{
Complex temp;
temp.x=this->x+c.x;
temp.y=this->y+c.y;
return (temp);
}
};
int main()
{
Complex c1,c2,c3;
c1.setData(3,4);
c2.setData(5,6);
c1.showData();
c2.showData();
c3=c1.add(c2);
c3.showData();
return 0;
}