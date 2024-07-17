#include <iostream>
using namespace std;
const double PI = 3.1415;

class shape
{
public:
	virtual double volume()const = 0;
};

class cylinder :public shape
{
private:
	double r;
	double h;
public:
	cylinder(double a, double b) :r(a), h(b) {}
	double volume()const
	{
		return PI * r * r * h;
	}
};

class sphere :public shape
{
private:
	double r;
public:
	sphere(double a) :r(a) {}
	double volume()const
	{
		return PI * r * r * r * 4 / 3;
	}
};

int main() {
	shape* p;
	double  r, h;
	cin >> r >> h;
	cylinder cy(r, h);
	sphere sp(r);
	p = &cy;
	cout << p->volume() << endl;
	p = &sp;
	cout << p->volume() << endl;
	return 0;
}
