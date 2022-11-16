#include<iostream>
using namespace std;

class Grand
{
private:
	int a;
public:
	Grand(int n) :a(n)
	{
		cout << "Constructing Grand,a = " << a << endl;

	}
	~Grand()
	{
		cout << "Destructing Grand" << endl;
	}
};

class Father :public Grand
{
private:
	int b;
public:
	Father(int n1, int n2) :Grand(n2), b(n1)
	{
		cout << "Constructing Father,b = " << b << endl;
	}
	~Father()
	{
		cout << "Destructing Father" << endl;
	}
};
class Mother {
private:
	int c;
public:
	Mother(int n) :c(n)
	{
		cout << "Constructing Mother" << endl;
	}
	~Mother()
	{
		cout << "Destructing Mother" << endl;
	}
};

class Son :public Father, public Mother
{
private:
	int d;

public:
	Son(int n1, int n2, int n3, int n4) :Mother(n2), Father(n3, n4), d(n1)
	{
		cout << "constructing Son" << endl;
	}
	~Son()
	{
		cout << "Destructing Son" << endl;
	}
};


//int main()
//{
//	Son(1, 2, 3, 4);
//	return 0;
//}