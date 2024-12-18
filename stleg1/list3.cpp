#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
list<int> l1,l2;
list<int>::iterator it;
l1={211,121,98,803,50};
l2={76,89,311,232,41};
for(it=l1.begin(),cout<<"list l1:";it!=l1.end();it++) cout<<*it<<" ";
cout<<"\n";
for(it=l2.begin(),cout<<"list l2:";it!=l2.end();it++) cout<<*it<<" ";
 
cout<<"\n\n*****merging before sorting list l1 and l2*****"<<endl;
l1.merge(l2);
for(it=l1.begin();it!=l1.end();it++)
{
cout<<*it<<" ";
}
l1.sort();
l2.sort();
cout<<"\n\n*****merging after sorting list l1 and l2*****"<<endl;
for(it=l1.begin(),cout<<"list l1:";it!=l1.end();it++) cout<<*it<<" ";


return 0;
}