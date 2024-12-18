#include<string.h>
#include<iostream>
using namespace std;
class City
{
private:
int code;
string name;
public:
city()
{
this->code=0;
}
City(int code,string name)
{
this->code=code;
this->name=name;
}
City(const City &other)
{
this->code=other.code;
this->name=other.name;
}
City & operator=(City other)
{
this->code=other.code;
this->name=other.name;
}
virtual ~City()
{
}
int getCode()
{
return this->code;
}
string getName()
{
return this->name;
}
};
