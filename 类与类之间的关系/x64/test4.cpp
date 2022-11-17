#include<iostream>
using namespace std;
//同名冲突和解决方法
//同名覆盖
//example5_09.cpp
class Base
{
public:
	int a;
	Base(int x)
	{
		a = x;
	}
	void Print()
	{
		cout << "Base::a = " << a << endl;
	}
};

class Derived :public Base
{
public:
	int a;
	Derived(int x, int y) :Base(x)
	{
		a = y;        //派生类
		Base::a *= 2; //基类
	}
	void Print()
	{
		Base::Print();
		cout << "Derived:: a = " << a << endl;
	}
};
void f1(Base& obj)
{
	obj.Print();
}
void f2(Derived& obj)
{
	obj.Print();
}

//int main()
//{
//	Derived d(200, 300); //Base::a = 400,a = 300
//	d.Print();//400,300
//	d.a = 400;//a = 400
//	d.Base::a = 500;//Base::a = 500
//	d.Base::Print();//500
//	Base* pb;
//	pb = &d;
//	pb->Print();//400(x)->500
//	//基类的指针访问指向派生类，访问的是基类的同名成员
//	f1(d);//500
//	//基类的引用成为派生类的别名时，访问的也是基类的同名成员
//	Derived* pd;
//	pd = &d;
//	pd->Print();//500 400
//	f2(d);//500 400
//	return 0;
//}