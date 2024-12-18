#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v)
{
cout<<"v.size():"<<v.size()<<endl;
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<" ";
}
cout<<endl;
}

int main()
{
vector<int> vec1;
int element,size=5;
vector<char> vec2(4);
vector<char>vec3(vec2);
vector<int> vec4(6,3);
for(int i=0;i<size;i++)
{
cout<<"Enter an element:";
cin>>element;
vec1.push_back(element);
}

cout<<"Values of vector1: ";display(vec1);
cout<<"size of vector1:"<<vec1.size()<<endl;

cout<<"Values of vector2: ";display(vec2);
cout<<"size of vector2:"<<vec2.size()<<endl;

cout<<"Values of vector3: ";display(vec3);
cout<<"size of vector3:"<<vec3.size()<<endl;

cout<<"Values of vector4: ";display(vec4);
cout<<"size of vector4:"<<vec4.size()<<endl;
return 0;
}
