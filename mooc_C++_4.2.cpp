//静态成员的使用  定义一个学生类
#include <iostream>
using namespace std;

class Student
{
private:
	int age;
	string name;
public:
	static int count;
	Student(int m, string n);
	Student();
	~Student();
	void Print()const;
};

int Student::count = 0;

Student::Student(int m, string n)
{
    count++;
    age = m;
    name = n;
}

Student::Student()
{
    count++;
    age = 0;
    name = "NoName";
}

Student::~Student()
{
    count--;
}

void Student::Print()const
{
    cout << count << endl;
    cout << "Name=" << name << " , " << "age=" << age << endl;
}

int main()
{
    cout << "count=" << Student::count << endl;
    Student s1, * p = new Student(23, "ZhangHong");
    s1.Print();
    p->Print();
    delete p;
    s1.Print();
    Student Stu[4];
    cout << "count=" << Student::count << endl;
    return 0;
}
