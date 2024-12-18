#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
map<string,int> marksMap1{{"Himansu",98},{"Shrira",99},{"Hitesh",90}};
map<string,int>:: iterator iter;
for(iter=marksMap1.begin();iter!=marksMap1.end();iter++)
{
cout<<(*iter).first<<" "<<(*iter).second<<endl;
}
return 0;
}