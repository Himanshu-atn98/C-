#include<iostream>
using namespace std;
template<class T>
class Stack
{
private:
T stack[100];
int lowerBound;
int upperBound;
int top;
public:
Stack();
int isEmpty();
int isFull();
void push(T);
T pop();
};
template<class T>
Stack<T>::Stack()
{
lowerBound=0;
upperBound=99;
 top=100;
}
template<class T>
int Stack<T>::isEmpty()
{
return top==upperBound+1;
}
template<class T>
int Stack<T>::isFull()
{
return top==lowerBound;
}
template<class T>
void Stack<T>::push(T data)
{
if(isFull()) return ;
top--;
stack[top]=data;
}
template<class T>
T Stack<T>::pop()
{
T data;
if(isEmpty()) return 0;
data=stack[top];
top++;
return data;
}
int main()
{
Stack<int> s1;
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);
Stack<float> s2;
s2.push(100.2f);
s2.push(200.3f);
s2.push(300.4f);
while(!s1.isEmpty())
{
cout<<s1.pop()<<endl;
}
cout<<endl;
while(!s2.isEmpty())
{
cout<<s2.pop()<<endl;
}
return 0;
}