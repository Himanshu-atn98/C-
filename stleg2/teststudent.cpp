#include<iostream>
using namespace std;
#include"Student.h"
int main()
{
Student s1(101,"Suresh");
cout<<s1.getRollNumber()<<" "<<s1.getName()<<endl;
return 0;
}