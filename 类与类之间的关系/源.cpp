#include<iostream>
using namespace std;

//������
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
	//ֻ��ͨ������:a();�������г�ʼ��
	void print(Test a)//���������ϵ
	{
		a.print();
		//cout << y << endl;
		a1.print();
	}

};
//˽�г�Ա���ɱ��̳�
