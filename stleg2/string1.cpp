#include<iostream>
using namespace std;
int main()
{
string g;
g="Good";
cout<<g<<endl;
string m;
m="Boys";
string k=g+" "+m;
cout<<m<<endl;
cout<<k<<endl;
cout<<(g==k)<<endl;
cout<<(g!=k)<<endl;
cout<<(g<k)<<endl;
string z[10];
for(int i=0;i<=9;i++)
{
cout<<"Enter a string(withou spaces)";
cin>>z[i];
}
for(int e=0;e<=8;e++)
{
for(int f=e+1;f<=9;f++)
{
if(z[f]<z[e])
{
g=z[e];
z[e]=z[f];
z[f]=g;
}
}
}
cout<<"Sorted list"<<endl;
for(int e=0;e<=9;e++)
{
cout<<z[e]<<endl;
}
return 0;
}