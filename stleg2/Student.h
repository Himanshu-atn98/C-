#include<string.h>
class Student
{
private:
int rollNumber;
char *name;
void release()
{
if(this->name!=NULL) delete [] this->name;
}
void set(int rollNumber,const char *name)
{
this->rollNumber=rollNumber;
this->name=NULL;
if(name==NULL)
{
this->name=new char[1];
this->name[0]='\0';
}
else
{
this->name=new char[strlen(name)+1];
strcpy(this->name,name);
}
}
public:
Student()
{
this->rollNumber=0;
this->name=NULL;
}
Student(int rollNumber,const char *name)
{
this->set(rollNumber,name);
}
Student(const Student &other)
{
this->set(other.rollNumber,other.name);
}
Student & operator=(Student other)
{
release();
this->set(other.rollNumber,other.name);
}
virtual ~Student()
{
release();
}
int getRollNumber()
{
return this->rollNumber;
}
const char* getName()
{
return this->name;
}
};
