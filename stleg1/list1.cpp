// To Compile use:-> g++ sourceCodeFileName.Extension -std=c++11 ExecutableFileName.Extension
// g++ list1.cpp -std=c++11 list1.exe

#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
list <int> l1{11,22,33};
list <string> l2{"India","Kathmandu","Dhaka","Island"};
list<int>:: iterator p1=l1.begin();
list<string>:: iterator p2=l2.begin();
while(p1!=l1.end())
{
cout<<*p1<<" ";
p1++;
}
cout<<"\n";
while(p2!=l2.end())
{
cout<<*p2<<" ";
p2++;
}
return 0;
}

