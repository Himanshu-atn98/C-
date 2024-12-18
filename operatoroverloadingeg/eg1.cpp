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
};
int main()
{
Complex c1,c2;
c1.setData(3,4);
c2.setData(5,6);
c1.showData();
c2.showData();
return 0;
}