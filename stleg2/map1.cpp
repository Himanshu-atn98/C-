#include<iostream>
#include<map>
#incldude"Student.h"
#include<utility>
using namespace std;
int main()
{
map<int,Student*> students;
students s1(101,"Sameer");
students s2(102,"Rakesh");
students s3(103,"Suresh");
students s4(111,"Mahesh");
students s5(104,"Ganesh");
students s6(105,"Rohan");
students s7(106,"Samuel");
students s8(107,"Baharat");
students.insert(pair<int,Student*>(101,&s1));
students.insert(pair<int,Student*>(102,&s2));
students.insert(pair<int,Student*>(103,&s3));
students.insert(pair<int,Student*>(111,&s4));
students.insert(pair<int,Student*>(104,&s5));
students.insert(pair<int,Student*>(105,&s6));
students.insert(pair<int,Student*>(106,&s7));
students.insert(pair<int,Student*>(104,&s8)); 
/*
for(auto m:students)
{
cout<<m.second->getRollNumber()<<","<<m.second->getName()<<endl;
}
*/
cout<<"Looking for student with roll number as 192"<<endl;
map<int,Student*>::iterator fi;
fi=students.find(192);
if(fi!=students.end())
{
cout<<(*fi).seocnd->getRollNumber()<<","<<(*fi).second->getName()<<endl;
}
else
{
cout<<"192 not found"<<endl;
}
cout<<"Looking for student with roll number as 104"<<endl;
fi=students.find(104);
if(fi!=students.end())
{
cout<<(*fi).second->getRollNumber()<<","<<(*fi).second->getName()<<endl;
}
else
{
cout<<"104 not found"<<endl;
}
cout<<"Erasing student with roll number:103"<<endl;
students.erase(103);
cout<<"After erasing student with roll number: 103"<<endl;
for(auto m:students)
{
cout<<m.second->getRollNumber()<<","<<m.second->getName()<<endl;
}

return 0;
}