//设计一个Car类，它的数据成员要能描述一辆汽车的品牌，型号，出厂年份和价格，成员函数包括提供合适的途径来访问数据成员，在main()函数中定义类的对象并调用相应成员函数。
#include <iostream>
using namespace std;

class Car
{
private:
	string brand;
	string type;
	int year;
	double price;
public:
	Car(string b = "undefinition", string t = "undefinition", int y = 2000, double p = 0);
	string GetBrand();
	string GetType();
	int GetYear();
	double GetPrice();
};

Car::Car(string b, string t, int y, double p)
{
	brand = b;
	type = t;
	year = y;
	price = p;
}

string Car::GetBrand()
{
	return brand;
}

string Car::GetType()
{
	return type;
}

int Car::GetYear()
{
	return year;
}

double Car::GetPrice()
{
	return price;
}

int main()
{
	Car car1("FIAT", "Palio", 2021, 6.5);
	cout << car1.GetBrand() << " " << car1.GetType() << " " << car1.GetYear() << " " << car1.GetPrice() << endl;

	Car car2;
	cout << car2.GetBrand() << " " << car2.GetType() << " " << car2.GetYear() << " " << car2.GetPrice() << endl;

	return 0;
}
