#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
map<string,int> marksMap; 
map<string,int>:: iterator iter;
marksMap["Rohan"]=90;
marksMap["Somani"]=99;
marksMap["Himanshu"]=98;

for(iter=marksMap.begin();iter!=marksMap.end();iter++)
{
cout<<(*iter).first<<" "<<(*iter).second<<endl;
}
marksMap.insert({{"Heeral",89},{"Nidhi",87},{"Aayushi",98}});

// we can also insert value by making an pair
marksMap.insert(pair<string,int>("Kanchi",78));

cout<<"\n****After inserting few more map is****"<<endl;
for(iter=marksMap.begin();iter!=marksMap.end();iter++)
{
cout<<(*iter).first<<" "<<(*iter).second<<endl;
}
return 0;
}