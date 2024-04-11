//定义一个学生类 Student ，要求见MOOC平台（太长了
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
private:
	int age;
	char* name = new char[10];

public:
	Student(int m, const char* n);
	Student();
	~Student();
	void SetMember(int m, const char* n);
	int Getage();
	char* Getname();
};

Student::Student(int m, const char* n)
{
	age = m;
	name = new char[strlen(n)+1];
	strcpy(name, n);
}

Student::Student()
{
	age = 0;
	name = new char[8];
	strcpy(name, "unnamed");
}

Student::~Student()
{
	delete[] name;
}

void Student::SetMember(int m, const char* n)
{
	age = m;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

int Student::Getage()
{
	return age;
}

char* Student::Getname()
{
	return name;
}

int main()
{
	Student stu[3] = { Student(13,"wang") };
	stu[2].SetMember(12, "zhang");
	for (int i = 0; i < 3; i++)
		cout << stu[i].Getage() << "," << stu[i].Getname() << "\n";
	return 0;
}
