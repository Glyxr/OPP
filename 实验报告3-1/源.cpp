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
		cout << "�þ��εı߳�Ϊ:" << a << "," << b << endl;
	}
	void set(double x1, double x2)
	{
		a = x1;
		b = x2;
		cout << "�߳��޸ĳɹ�������" << endl;
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
	//�޸ľ��ζ���v�еı߳�a, b����ֵΪ10, 20; ����޸ĺ�ı߳���ֵ.
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
	a.get();//�޸Ĳ��ɹ�
	b.get();
	c.get();
	return 0;
}