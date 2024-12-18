#include<iostream>
using namespace std;
template<class T>
class ArrayList
{
private:
struct controlBlock
{
int capacity;
T *arr_ptr;
};
controlBlock *s;
public:
ArrayList(int capacity)
{
s=new controlBlock;
s->capacity=capacity;
s->arr_ptr=new T[s->capacity];
}
void addElement(int index,T data)
{
if(index<=s->capacity-1 && index>=0)
{
s->arr_ptr[index]=data;
}
else
{
cout<<"Array Index is not valid"<<endl;
}
}

void viewElement(int index,T &data)
{
if(index<=s->capacity && index>=0)
{
data=s->arr_ptr[index];
}
else
{
cout<<"Array Index is not valid"<<endl;
}
}

void viewAllElement()
{
for(int i=0;i<s->capacity;i++)
{
cout<<s->arr_ptr[i]<<endl;
}
}

};

int main()
{
ArrayList<int> list1(4);
list1.addElement(0,32);
list1.addElement(1,42);
list1.addElement(2,52);
list1.addElement(3,62);
int a;
list1.viewElement(0,a);
cout<<"The value at index zero(0) is:"<<a<<endl;
list1.viewAllElement();
ArrayList<float> list2(4);
list2.addElement(0,32.9);
list2.addElement(1,42.8);
list2.addElement(2,52.7);
list2.addElement(3,62.6);
float b;
list2.viewElement(0,b);
list2.viewAllElement();
cout<<"The value at index zero(0) is:"<<b<<endl;
list2.viewAllElement();
return 0;
}