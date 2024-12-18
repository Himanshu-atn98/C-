#include<utility>
#include<iostream>
using namespace std;
int main()
{
pair<int,int> p1;
cout<<"First:"<<p1.first<<",Second:"<<p1.second<<endl;
p1.first=10;
p1.second=20;
cout<<"First:"<<p1.first<<",Second:"<<p1.second<<endl;
pair<int,int>p2;
p2=make_pair(1000,2000);
cout<<"First:"<<p1.first<<",Second:"<<p1.second<<endl;
cout<<"First:"<<p2.first<<",Second:"<<p2.second<<endl; 
cout<<"Swapping"<<endl;
p1.swap(p2);
cout<<"First:"<<p1.first<<",Second:"<<p1.second<<endl;
cout<<"First:"<<p2.first<<",Second:"<<p2.second<<endl; 
cout<<"Swapping again"<<endl;
swap(p1,p2);
cout<<"First:"<<p1.first<<",Second:"<<p1.second<<endl;
cout<<"First:"<<p2.first<<",Second:"<<p2.second<<endl;
pair<int,char> p3(10,'Z');
cout<<"First:"<<p3.first<<",Second:"<<p3.second<<endl;
pair<int,char> p4=p3;
cout<<"First:"<<p4.first<<",Second:"<<p4.second<<endl;
pair<int,char>p5;
p5=p4;
cout<<"First:"<<p5.first<<",Second:"<<p5.second<<endl;
cout<<"*********************************************"<<endl;
cout<<(p4==p5)<<endl;
cout<<(p4!=p5)<<endl;
pair<int,char>p6(5,'Z');
cout<<(p6<p5)<<endl;
pair<int,char> p7(10,'Z');
cout<<(p7<p5)<<endl;
pair<int,char> p8(10,'Y');
cout<<(p8<p5)<<endl;
cout<<(get<0>(p8))<<endl;
cout<<(get<1>(p8))<<endl;
// Assignment: implement operator overloading to make cout<<p7; possbile
return 0;
}
