#include<iostream>
using namespace std;

//类的组合
class Test
{
private:
	int x;
public:
	Test(int n)
	{
		x = n;
	}
	Test()
	{
		x = 0;
	}
	~Test() {}
	void print()
	{
		cout << x << endl;
	}
};

class A
{
private:
	int y;
	Test a1, a2;
public:
	A(int x1, int x2, int x3) :a1(x1), a2(x2)
	{
		y = x3;
	}
	A() :a1(), a2()
	{
		y = 0;
	}
	//只能通过类名:a();这样进行初始化
	void print(Test a)//类的依赖关系
	{
		a.print();
		//cout << y << endl;
		a1.print();
	}

};
//私有成员不可被继承
