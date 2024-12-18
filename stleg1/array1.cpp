#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
int arr[]={31,82,53,23,9,12,4,43,89,19};
int length=sizeof(arr)/sizeof(arr[0]);
cout<<"Length of array is:"<<length<<endl;
cout<<"Given array is:"<<endl;
for(int i=0;i<length;i++)
{
cout<<arr[i]<<" ";
}
cout<<"\n*****sAfter sorting*****"<<endl;
sort(arr,arr+length);// we are passing two arguments. First: the beginning of the array & Second: length for which we want to sort 
for(int i=0;i<length;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}