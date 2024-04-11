//要求先定义一个Point类，用来产生平面上的点对象。两点决定一条线段，即线段由点所构成。因此，Line类使用Point类的对象作为数据成员，然后在Line类的构造函数里求出线段的长度。
#include <iostream>
#include<iomanip>
#include <math.h>
using namespace std;

class Point
{
private:
	double X, Y;
public:
	Point(double a, double b);
	//Point(Point& p);
	double GetX();
	double GetY();
};

Point::Point(double a, double b)
{
	X = a;
	Y = b;
}

double Point::GetX()
{
	return X;
}

double Point::GetY()
{
	return Y;
}

class Line
{
private:
	Point A, B;                    		//定义两个Point类的对象成员
	double length;
public:
	Line(Point p1, Point p2);//Line类的构造函数原型，函数体类外实现
	double GetLength();
};

Line::Line(Point p1, Point p2) :A(p1), B(p2)  //需要初始化的数据成员是对象，必须使用初始化列表
{
	double x1, y1, x2, y2;
	x1 = p1.GetX();
	y1 = p1.GetY();
	x2 = p2.GetX();
	y2 = p2.GetY();
	length = pow((pow(x1-x2, 2) + pow(y1-y2, 2)), 0.5);
}

double Line::GetLength()
{
	return length;
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	Point m(a, b);
	Point n(c, d);
	Line L(m, n);
	cout << setprecision(3) << L.GetLength() << endl;
	return 0;
}
