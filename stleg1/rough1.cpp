#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int> v1;
cout<<"Capacity:"<<v1.capacity()<<endl;
cout<<"Size:"<<v1.size()<<endl;
v1.push_back(10);
cout<<"Capacity:"<<v1.capacity()<<endl;
cout<<"Size:"<<v1.size()<<endl;
 
v1.push_back(20);
cout<<"Capacity:"<<v1.capacity()<<endl;
cout<<"Size:"<<v1.size()<<endl;
v1.push_back(30);
cout<<"Capacity:"<<v1.capacity()<<endl;
cout<<"Size:"<<v1.size()<<endl;
/*
for(int i=0;i<v1.capacity();i++)
{
cout<<v1[i]<<endl;
}
*/
for(int i=0;i<v1.size();i++)
{
cout<<v1[i]<<endl;
}
v1.pop_back();
cout<<"Capacity:"<<v1.capacity()<<endl;
cout<<"Size:"<<v1.size()<<endl;
return 0;
}