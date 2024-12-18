#include<array>
#include<iostream>
using namespace std;
int main()
{
array<int,5> a1;
cout<<"Default data"<<endl;
for(int e=0;e<a1.size();e++) cout<<a1[e]<<endl;
a1[0]=10;
a1[1]=20;
a1[2]=30;
a1[3]=40;
a1[4]=50;
cout<<"Without iterator"<<endl;
for(int i=0;i<a1.size();i++) cout<<a1[i]<<endl;
cout<<"With iterator"<<endl;
array<int,5>::iterator fi=a1.begin();
while(fi!=a1.end())
{
cout<<*fi<<endl;
++fi;
}
cout<<"The new range based loop"<<endl;
for(int x:a1)
{
cout<<x<<endl;
}
cout<<"More fun introduced in C++"<<endl;
for(auto x:a1)
{
cout<<x<<endl;
}
// Assignment: try other functions as disccussed in the classroom session
return 0;
}