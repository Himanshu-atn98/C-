#include<iostream>
using namespace std;
void fun(int a)
{
cout<<"Non templatised fun() function with value of a:"<<a<<endl;
}
template<class T>
void fun(T a)
{
cout<<"Templatised fun() function with value of a:"<<a<<endl;
}
int main()
{
fun(4);
//fun(4.5);
return 0;
}