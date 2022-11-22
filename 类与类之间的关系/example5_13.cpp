//赋值兼容
#include<iostream>
using namespace std;
class Base
{
private:
	int b;
public:
	Base(int x):b(x)
	{}
	int getb()
	{
		return b;
	}
};
class Derived :public Base
{
private:
	int d;
public:
	Derived(int x, int y) :Base(x), d(y)
	{
	}
	int getd()
	{
		return d;
	}
};

//int main()
//{
//	Base b1(11);
//	Derived d1(22, 33);
//	b1 = d1;         //第一种：基类 = 派生类
//	cout << "b1.getb() = " << b1.getb() << endl;
//	//cout << "b1.getd() = " << b1.getd() << endl;    不能访问getd（）
//	Base* pb1 = &d1; //第二种：*基类 = 派生类
//	cout << "pb1->getb() = " << pb1->getb() << endl;
//	//cout << "pb1->getd() = " << pb1->getd() << endl; 还是不能访问getd()
//	Derived* pd = &d1;
//	Base* pb2 = pd;  //第三种：*基类 = *派生类
//	cout << "pb2->getb() = " << pb2->getb() << endl;
//	//cout << "pb2->getd() = " << pb2->getd() << endl;  不能访问
//	Base& rb = d1;
//	//cout << "rb.getd() = " << rb.getd() << endl;      不能
//	cout << "rb.getb() = " << rb.getb() << endl;
//	return 0;
//}