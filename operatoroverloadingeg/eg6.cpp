#include<iostream>
using namespace std;
class Integer
{
private:
int x;
public:
void setData(int a)
{
x=a;
}
void showData()
{
cout<<"x:"<<x<<endl;
}
Integer operator ++()
{
Integer temp;
temp.x=++this->x;
return (temp);
}	
};
int main()
{
Integer int1,int2;
int1.setData(5);
cout<<"*****Before Increment*****"<<endl;
int1.showData();
int2=++int1; //Pre Increment.
//int2=int1++;   //Post Increment.    
cout<<"*****After Pre Increment*****"<<endl;
int1.showData();
int2.showData();
return 0;
}