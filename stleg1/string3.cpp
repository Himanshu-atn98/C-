#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
string s1="Hello";
string s2="Himanshu";
string s3;
char str[]="Shivangi";
cout<<"S1:"<<s1<<endl<<"S2:"<<s2<<endl<<"S3:"<<s3<<endl<<"Str:"<<str<<endl;

//s3=s1+s2; --> WILL COMPILE
//s3=str;   --> WILL COMPILE
//s1==s2;   --> WILL COMPILE
//s3.assign("Prijesh"); --> WILL COMPILE
//s1.append(" Students"); --> WILL COMPILE
//s1.insert(2,"123"); --> WILL COMPILE
//s1.replace(1,3,"A"); --> WILL COMPILE
//s1.erase(); --> WILL COMPILE
s3.assign("Hello Online Students,this is Himanshu Atneriya going to be online from the Online Platfrom 'YOUR'");

/*   --> WILL COMPILE
int x=s3.find("Online");
cout<<"Find at index No.:"<<x<<endl;
int x=s3.rfind("Online");
cout<<"Reverse find at index No.:"<<x<<endl;
*/
//int x=s1.compare(s2); --> WILL COMPILE// Output: -1
// int x=s2.compare(s1); --> WILL COMPILE// Output: 1

//strcpy(str,s1); --> WILL NOT COMPILE// Output: INCOMPATIBLE TYPE.
//strcpy(str,s1.c_str()); --> WILL COMPILE

cout<<"\nS1:"<<s1<<endl;
cout<<"S2:"<<s2<<endl;
cout<<"S3:"<<s3<<endl;
cout<<"Str:"<<str<<endl;
return 0;
}