#include"Student.h"
#include<list>
#include<iostream>
using namespace std;
int main()
{
Student s1(101,"Sameer");
Student s2(102,"Mohit");
Student s3(103,"Rakesh");
Student s4(104,"Reena");
Student s5(105,"Tina");
Student s6(106,"Kamal");
list<Student *> students;
students.push_back(&s2);
students.push_back(&s4);
students.push_back(&s5);
students.push_back(&s6);
students.push_front(&s1);
// logic to insert an element at index 3
list<Student *>::iterator fi;
int index=2;
int m;
fi=students.begin();
m=1;
while(m<=index)
{
++fi;
m++;
}
students.insert(fi,&s3);
for(fi=students.begin();fi!=students.end();++fi)
{
cout<<(*fi)->getRollNumber()<<","<<(*fi)->getName()<<endl;
}
return 0;
}