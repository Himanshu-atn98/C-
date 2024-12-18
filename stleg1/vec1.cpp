#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
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
int element,size;
for(int i=0;i<4;i++)
{
cout<<"Enter an element:";
cin>>element;
vec1.push_back(element);
}
display(vec1);
return 0;
}
