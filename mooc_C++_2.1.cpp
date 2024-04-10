//编写一个C++风格的程序，输入半径radius，当radius为正数时，输出其面积area和周长circumference；否则，输出提示信息error input!
#include <iostream>
using namespace std;
const double PI = 3.14159;

double area1(double r)
{
	double area;
	area = PI * r * r;
	return area;
}
double circumference1(double r)
{
	double circumference;
	circumference = 2 * PI * r;
	return circumference;
}
bool judge(double r)
{
	if (r > 0) return true;
	else return false;
}
int main()
{
	double radius;
	cin >> radius;
	if (judge(radius) == false) cout << "error input!" << endl;
	else
	{
		double area, circumference;
		area = area1(radius);
		circumference = circumference1(radius);
		cout << area << " " << circumference << endl;
	}
	return 0;
}
