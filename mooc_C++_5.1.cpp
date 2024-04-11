//由POINT类派生CIRCLE类，完成类的定义并验证。
#include <iostream>
using namespace std;

class POINT
{
protected:
	int x, y;
public:
	POINT(int a, int b) :x(a), y(b){};//初始化x,y
	void change(int a, int b)
	{
		x = a;
		y = b;
	}  //change函数改变坐标位置
	void show()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}  //show函数显示点的位置
};

class CIRCLE :public POINT
{
private:
	int r;
public:
	CIRCLE(int a, int b, int c) :POINT(a, b), r(c){};  //调用基类构造函数POINT，初始化半径r
	void show()
	{
		cout << "the center of the circle is:\n";
		POINT::show();
		cout << "the radius is:" << r << endl;
	}
};

int main()
{
	POINT p(2, 3);
	CIRCLE c(3, 4, 5);
	cout << "original p:\n";
	p.show();
	p.change(20, 30);
	cout << "changed p:\n";
	p.show();
	cout << "original c:\n";
	c.show();
	c.change(30, 40);
	cout << "changed c:\n";
	c.show();
	return 0;
}
