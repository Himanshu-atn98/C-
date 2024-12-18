#include<utility>
#include<iostream>
using namespace std;
#include"Student.h"
#include"City.h"
int main()
{
pair<Student,City> p1(Student(101,"Suresh"),City(5001,"Pune"));
Student s=p1.first;
City c=p1.second;
cout<<"Student:Roll number->"<<s.getRollNumber()<<",Name->"<<s.getName()<<endl;
cout<<"belong to City: Code->"<<c.getCode()<<",Name->"<<c.getName()<<endl;
return 0;
}