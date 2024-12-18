#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
vector<int> vec1; 
cout<<"Size of vec1 is:"<<vec1.size()<<endl;
for(int i=0;i<10;i++)
{
vec1.push_back(501+i); 
}
 
for(int i=0;i<vec1.size();i++)
{
cout<<"vec1["<<i<<"]:"<<vec1[i]<<endl;
}
cout<<"After Pushing Elements\nSize of vec1 is:"<<vec1.size()<<endl;


return 0;
}