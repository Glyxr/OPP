#include<iostream>
using namespace std;
//虚基类
//只有最后一层派生类对基类构造函数的调用发挥作用{Base(3*x)}
class Base
{
protected:
	int a;
public:
	void print() { cout << a << endl; }
	Base(int x) :a(x)
	{
		cout << "Base a = " << a << endl;
	}
	~Base()
	{
		cout << "Desturcting Base" << endl;
	}
};
class Base1 :public virtual Base
{
protected:
	int b;
public:
	Base1(int x, int y) :Base(y), b(x)
	{
		cout << "Base1 from Base a = " << a << endl;
		cout << "Base1 b = " << b << endl;
	}
	~Base1()
	{
		cout << "Destructing Base1" << endl;
	}
};
class Base2 :public  virtual Base
{
protected:
	int c;
public:
	Base2(int x, int y) :Base(y), c(x)
	{
		cout << "Base2 from Base a = " << a << endl;
		cout << "Base2 c= " << c << endl;
	}
	~Base2()
	{
		cout << "Destructing Base2" << endl;
	}
};

class Derived :public Base1, public Base2
{
protected:
	int a;
public:
	////int a;
	Derived(int x, int y) :Base1(x, y),Base(3*x),Base2(2 * x, 2 * y)
	{
		Base::a = 1000;
		//cout << "a = " << a << endl;
		//cout << "Base::a = " << Base::a << endl;
		cout << "Base1::a = " << Base1::a << endl;
		cout << "Base2::a = " << Base2::a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
	}
	~Derived()
	{
		cout << "Destructing Derived" << endl;
	}
};

//class A
//{
//protected:
//	int a;
//};
int main()
{
	Derived obj(10, 20);
	obj.Base::print();
	return 0;
}