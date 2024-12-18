#include<string.h>
#include<iostream>
using namespace std;
int main()
{
string g;
g="God is great";
char a[101];
strcpy(a,g.c_str());
cout<<a<<endl;
g="I live in Ujjain. Ujjain is the city of GODS";
cout<<g<<endl;
cout<<"g.length():"<<g.length()<<","<<"g.size():"<<g.size()<<","<<"g.empty():"<<g.empty()<<endl;
g="I live in Indore, Indore is the city of GODS";
cout<<g<<endl;
string search="Indore";
size_t x1;
x1=g.find(search);
cout<<search<<" from index o founds at index "<<x1<<endl;
size_t x2;
x2=g.find(search,x1+1);
cout<<search<<" from index "<<x1+1<<" found at index "<<x2<<endl;
size_t x3;
x3=g.find(search,x1+1);
cout<<search<<" from index "<<x2+1<<" foudn at index "<<x3<<endl;
cout<<"size_t in unsigned int and largest possible value is 2^32-1 which is "<<string::npos<<endl;
x1=g.find('I');
cout<<"I from index 0 found at index "<<x1<<endl;
x2=g.find('I',x1+1);
cout<<"I from index "<<x1+1<<" found at index "<<x2<<endl;
x3=g.find('I',x2+1);
cout<<" I from index "<<x2+1<<" foudn at index "<<x3<<endl;
g="I live in Udaipur, Udaipur is the city of lakes";
 //g="I live in Udaipur, Udaipur is the city of lakess";
search="Udaipur";
string replaceWith="Ujjain";
x1=0;
 // x2=g.find(search,x1); 
 //cout<<"X2:"<<x2<<endl; -->Output: 10
cout<<"g:"<<g<<endl;
while(x1=g.find(search,x1)!=string::npos)
{
g.replace(x1,search.length(),replaceWith);
cout<<g<<endl;
}
cout<<"*************"<<endl;
search ="lakes";
replaceWith="GODS";
x1=g.find("lakes");
g.replace(x1,search.length(),replaceWith);
cout<<"g:"<<g<<endl;
x1=g.rfind("Ujjain");
cout<<"x1:"<<x1<<endl;
x2=g.rfind("Ujjain",x1-1);
cout<<"x2:"<<x2<<endl;
x3=g.rfind("Ujjain",x2-1);
cout<<"x3:"<<x3<<endl;
cout<<"g:"<<g<<endl;
cout<<"*****************************************"<<endl;
cout<<g.find_first_of("UAE")<<endl;
cout<<g.find_first_of("AUE",11)<<endl;
cout<<g.find_last_of("UAE")<<endl;
cout<<g.find_last_of("AUE",17)<<endl;
cout<<g.find_first_not_of("AEIOU")<<endl;
cout<<g.find_first_not_of("AEIOUaeiou",3)<<endl;
cout<<g.find_last_not_of("AEIOUaeiou",40)<<endl;
cout<<"*****************************************"<<endl;
g="God is great";
cout<<"g:"<<g<<endl;
string m;
m=g.substr(4,2);
cout<<"m:"<<m<<endl;
m=g.substr(4);
cout<<"m:"<<m<<endl;
g="Good Bd Ugly";
m="Bad";
cout<<g.compare(m)<<endl;
cout<<m.compare(g)<<endl;
cout<<m.compare(string("Bad"))<<endl;
cout<<g.compare(5,m.length(),m)<<endl;
cout<<"*********"<<endl;
string e,f;
e="BAD";
f="BADMAx";
cout<<f.compare(3,e.length(),e)<<endl;
cout<<f.compare(e)<<endl;
return 0;
}