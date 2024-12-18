#include<iostream>
using namespace std;
#include"City.h"
int main()
{
City c1(101,"Ujjain");
cout<<c1.getCode()<<" "<<c1.getName()<<endl;
return 0;
}