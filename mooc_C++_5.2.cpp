//虚基类的应用 图5-13（见教材p138）是一个多重继承的类继承关系示意图，各类的主要数据成员有说明，请自己定义合理的成员函数，编程实现该继承关系的程序，并定义一个在职研究生对象，先输入相关信息，再输出。
#include <iostream>
using namespace std;

class Data
{
protected:
	string name;
	Data(string n) :name(n) {}
	void print()
	{
		cout << "name=" << name << endl;
	}
};

class Student :virtual public Data
{
protected:
	string id;
	Student(string n,string i) :Data(n),id(i) {}
	void print()
	{
		cout << "id=" << id << endl;
	}
};

class Teacher :virtual public Data
{
protected:
	float sal;
	Teacher(string n, float s) :Data(n), sal(s) {}
	void print()
	{
		cout << "sal=" << sal << endl;
	}
};

class Postgrad :public Student
{
protected:
	string dn;
	Postgrad(string n, string i, string d) :Data(n), Student(n, i), dn(d) {}
	void print()
	{
		cout << "dn=" << dn << endl;
	}
};

class Tpost :public Postgrad, Teacher
{
public:
	Tpost(string n, string i, float s, string d) :Data(n), Postgrad(n, i, d), Teacher(n, s)
	{
		Data::print();
		Student::print();
		Postgrad::print();
		Teacher::print();
	}
};

int main()
{
	string name;
	string id;
	string dn;
	float sal;
	cin >> name >> id >> dn >> sal;
	cout << "The teacher and postgraduate:" << endl;
	Tpost tpost(name, id, sal, dn);
	return 0;
}
