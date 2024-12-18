#include<list>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
list<int> aList;
aList.push_back(10);
aList.push_back(20);
aList.push_back(30);
aList.push_back(40);
aList.push_back(50);
aList.push_back(60);
aList.push_back(70);
aList.push_back(30);
aList.push_back(80);
for(list<int>::iterator fi=aList.begin();fi!=aList.end();++fi)
{
cout<<*fi<<endl;
}
aList.sort();
cout<<"After calling sort function"<<endl;
for(list<int>::iterator fi=aList.begin();fi!=aList.end();++fi)
{
cout<<*fi<<endl;
}
//Assigment, try calling unique without calling sort function
// and see how list behaces
cout<<"***********************************************"<<endl;
//list<int>::iterator it=unique(aList.begin(),aList.end());
aList.unique();
for(list<int>::iterator fi=aList.begin();fi!=aList.end();++fi)
{
cout<<*fi<<endl;
}

return 0;
}