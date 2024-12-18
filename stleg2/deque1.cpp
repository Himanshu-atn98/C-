#include<deque>
#include<iostream>
using namespace std;
int main()
{
deque<int> q;
q.push_back(10);
q.push_back(20);
q.push_back(30);
q.push_front(2);
q.push_front(4);
q.push_front(5);
for(int e=0;e<q.size();++e)
{
cout<<q[e]<<endl;
}
q.pop_front();
q.pop_back();
cout<<"After popping elements from front and back"<<endl;
for(int e=0;e<q.size();e++)
{
cout<<q[e]<<endl;
}
// Assignment : try other function as done in the examples of vector
return 0;
}
