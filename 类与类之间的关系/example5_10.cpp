//多重继承中，直接基类有同名函数
#include<iostream>
using namespace std;
class Base1
{
protected:
	int a;//可继承
public:
	Base1(int x)
	{
		a = x;
		cout << "Base1 a = " << a << endl;
	}
};

class Base2
{
protected:
	int a;
public:
	Base2(int x)
	{
		a = x;
		cout << "Base2 a = " << a << endl;
	}
};

class Derived :public Base1, public Base2
{
public:
	Derived(int x, int y) :Base1(x), Base2(y)
	{
		Base1::a *= 2;
		Base2::a *= 2;//访问a要指明a的基类
		cout << "Derived from Base1::a";
		cout << Base1::a << endl;
		cout << "Derived from Base2::a";
		cout << Base2::a << endl;
	}
};
//test
//int main()
//{
//	Derived obj(10, 20);
//	return 0;
//}
//四角问题