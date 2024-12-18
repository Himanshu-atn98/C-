#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
string s1="Hello";
char s2[20]="Himanshu";
cout<<s1<<endl;
cout<<s2<<endl;

//s1=s2;// WILL COMPILE
//s2=s1;// WILL NOT COMPILE INCOMPATIBLE TYPE.

/* WILL COMPILE means s1>s2 Or s1<s2 both statements will be compile
if(s1>s2) cout<<"S1 is greater than S2"<<endl;
else cout<<"S1 is smaller than S2"<<endl;

if(s2>s1) cout<<"S2 is greater than S1"<<endl;
else cout<<"S2 is smaller than S1"<<endl;
*/

//s1>s2;//will compile
//s2<s1;// will compile

char s3[51]="Hitesh";
char s4[51]="Aayush";
char s5[51]="Akshita";
cout<<s3<<endl;
cout<<s4<<endl;
cout<<s5<<endl;

//s3=s1+s2;// NOT COMPILE 
//s3=s2+s1;// NOT COMPILE
//strcpy(s1,s2);// Will not compile.This line also show the proof that <string> and <string.h> both are different.
//strcpy(s2,s1);//NOT compile

strcpy(s3,s2);
int x=strcmp(s2,s3);
cout<<"\nX:"<<x<<endl;
strcat(s3,s4);
strcpy(s3,strcat(s4,s5));
cout<<"\nS1:"<<s1<<endl;
cout<<"S2:"<<s2<<endl;
cout<<"S3:"<<s3<<endl;
cout<<"S4:"<<s4<<endl;
cout<<"S5:"<<s5<<endl;

return 0;
}