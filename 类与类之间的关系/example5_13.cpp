//��ֵ����
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
//	b1 = d1;         //��һ�֣����� = ������
//	cout << "b1.getb() = " << b1.getb() << endl;
//	//cout << "b1.getd() = " << b1.getd() << endl;    ���ܷ���getd����
//	Base* pb1 = &d1; //�ڶ��֣�*���� = ������
//	cout << "pb1->getb() = " << pb1->getb() << endl;
//	//cout << "pb1->getd() = " << pb1->getd() << endl; ���ǲ��ܷ���getd()
//	Derived* pd = &d1;
//	Base* pb2 = pd;  //�����֣�*���� = *������
//	cout << "pb2->getb() = " << pb2->getb() << endl;
//	//cout << "pb2->getd() = " << pb2->getd() << endl;  ���ܷ���
//	Base& rb = d1;
//	//cout << "rb.getd() = " << rb.getd() << endl;      ����
//	cout << "rb.getb() = " << rb.getb() << endl;
//	return 0;
//}