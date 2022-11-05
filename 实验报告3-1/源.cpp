#include<iostream>
using namespace std;
class rectangle
{
private:
	double a;
	double b;
public:
	rectangle() {}
	rectangle(double x1,double x2)
	{
		this->a = x1;
		this->b = x2;
	}
	rectangle(const rectangle& A)
	{
		a = A.a;
		b = A.b;
	}
	~rectangle() {}
	void get()
	{
		cout << "该矩形的边长为:" << a << "," << b << endl;
	}
	void set(double x1, double x2)
	{
		a = x1;
		b = x2;
		cout << "边长修改成功！！！" << endl;
	}
	bool issquare()
	{
		if (a == b) return true;
		else return false;
	}
	double getC()
	{
		return (a + b) * 2;
	}
	double getS()
	{
		return a * b;
	}

};

void func(rectangle v, rectangle* p, rectangle& r)
{
	//修改矩形对象v中的边长a, b的数值为10, 20; 输出修改后的边长数值.
	v.set(10, 20);
	v.get();
	//
	p->set(10, 20);
	p->get();
	//
	r.set(10, 20);
	r.get();
	}
int main()
{
	rectangle a(0, 0), b(1, 1), c(2, 2), d(4, 4);
	rectangle f(a);
	func(a, &b, c);
	a.get();//修改不成功
	b.get();
	c.get();
	return 0;
}