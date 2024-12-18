#include<iostream>
using namespace std;
// To find average 
template<class T1,class T2> // Or---> template<class T1>
float funAvg(T1 a,T2 b)
{
float avg=(a+b)/2.0;
return avg;
}
// To Swaping numbers
template<class T3,class T4>
void swap(T3 &a,T3 &b) // Or---> void swap(T3 &a,T4 &b)
{
T3 temp=a;
a=b;
b=temp;
}
int main()
{
float a;
a=funAvg(5,2);
printf("The average of these numbers is:%.2f\n",a);
int x=8,y=16;
cout<<"*****Before swaping*****"<<endl<<"X:"<<x<<" and "<<"Y:"<<y<<endl;
swap(x,y);
cout<<"*****After swaping*****"<<endl<<"X:"<<x<<" and "<<"Y:"<<y<<endl;
return 0;
}