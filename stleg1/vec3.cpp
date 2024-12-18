#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
//vector<int> vec1;
vector<int> vec1(5);

cout<<"Size of vec1 is:"<<vec1.size()<<endl;
vector<int>:: iterator iter=vec1.begin();
for(int i=0;i<vec1.size();i++)
{
*iter=501+i;
iter++;
}
 
for(int i=0;i<vec1.size();i++)
{
cout<<"iter["<<i<<"]"<<" Ya "<<"vec1["<<i<<"]:"<<vec1[i]<<endl;
iter++;
}


return 0;
}