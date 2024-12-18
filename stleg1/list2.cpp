#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
list<int> l1={251,123,231,510,112,91};
list<int>::iterator it;//=l1.begin();
for(it=l1.begin();it!=l1.end();it++)
{
cout<<*it<<" ";
}

cout<<"\n*****push an element in the front and last*****"<<endl;
l1.push_back(83);
 l1.push_front(1010);
cout<<"After push the elenments list is:"<<endl; 
for(it=l1.begin();it!=l1.end();it++)
{
cout<<*it<<" ";
}
cout<<"\n Element from front:"<<l1.front()<<endl;
cout<<" Element from last:"<<l1.back()<<endl;
cout<<"\n\n*****Sorting the list********"<<endl;
l1.sort();
for(it=l1.begin();it!=l1.end();it++)
{
cout<<*it<<" ";
}

cout<<"\n\n*****Reversing the list********"<<endl;
l1.reverse();
for(it=l1.begin();it!=l1.end();it++)
{
cout<<*it<<" ";
}
l1.pop_front();
l1.pop_back();
cout<<"\n\n****List after poping from front and last****"<<endl; 
for(it=l1.begin();it!=l1.end();it++)
{
cout<<*it<<" ";
}
return 0;
}