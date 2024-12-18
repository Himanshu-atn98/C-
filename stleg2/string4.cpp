#include<iostream>
using namespace std;
int main()
{
string g;
g="God is great";
cout<<"Iterating string"<<endl;
cout<<" Technique 1"<<endl;
for(int e=0;e<g.length();e++)
{
//cout<<g[e]<<endl;
cout<<g[e];
}
cout<<"\n Technique 2"<<endl;
string::iterator i=g.begin();
while(i!=g.end())
{
//cout<<*i<<endl;
cout<<*i;
++i;
}
cout<<"\n Technique 3"<<endl;
string:: reverse_iterator k=g.rbegin();
while(k!=g.rend())
{
cout<<*k;
++k;
}

return 0;
}