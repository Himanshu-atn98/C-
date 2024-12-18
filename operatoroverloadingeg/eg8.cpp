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
Integer operator ++()  // For pre increment.
{
Integer temp;
temp.x=++this->x;
return (temp);
}
Integer operator ++(int)  // For post increment.
{
Integer temp;
//temp.x=this->x++;
temp.x=++this->x;
return (temp);
}	
	
};
int main()
{
Integer int1,int2;
int1.setData(5);
cout<<"*****Before Increment value of int1's x*****"<<endl;
int1.showData();

int2=++int1;   // Or---> int2=int1.operator++();   (Pre Increment.)
cout<<"*****After Pre Increment*****"<<endl;
cout<<"Value of int1's x"<<endl;
int1.showData();
cout<<"Value of int2's x"<<endl;
int2.showData();

int2=int1++;   //Or---> int2=int1.operator++();    (Post Increment.)    
cout<<"*****After Post Increment*****"<<endl;
cout<<"Value of int2's x"<<endl;
int2.showData();
cout<<"Value of int1's x"<<endl;
int1.showData();
return 0;
}