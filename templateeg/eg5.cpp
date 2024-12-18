#include<iostream>
using namespace std;
float funAvg(int a,int b)
{
float avg=(a+b)/2.0;
return avg;
}
int main()
{
float a;
a=funAvg(5,2);
cout<<"The average of 5 nad 2 is:"<<a<<endl;
//printf("The average of 5 and 2 is:%f\n",a);  --->OUTPUT:3.500000
printf("The average of 5 and 2 is:%.2f\n",a);
return 0;
}