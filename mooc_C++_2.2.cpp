//定义一个int型指针变量p,通过new运算符申请包含n个元素的动态一维数组，
//输入数组的n个元素，然后求出所有正数的平均值、统计负数的个数。
//输出这两个运算结果，最后用delete运算符释放动态内存空间。
#include <iostream>
using namespace std;

int negative(int *p,int n)  //统计负数个数
{
	int i,x=0;
	for (i = 0; i < n; i++)
	{
		if (p[i] < 0) x++;
	}
	return x;
}

double average(int* p, int n)  //计算平均值
{
	int i,x=0;
	double y=0;
	for (i = 0; i < n; i++)
	{
		if (p[i] > 0)
		{
			y += p[i];
			x++;
		}
	}
	if (x == 0) y = 0;  //考虑无正数情况
	else y = y / x;
	return y;
}

int main()
{
	int *p;
	int i,n;
	cin >> n;
	p = new int[n];  //创建动态空间

	for ( i = 0; i < n; i++)
	{
		cin >> p[i];
	}

	double ave;
	int number;
	number = negative(p,n);
	ave = average(p,n);

	cout << "ave=" << ave << "  number=" << number << endl;

	delete [] p;  //释放动态空间
	return 0;
}
