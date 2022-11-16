#include<iostream>
using namespace std;
class Base
{
private:
	int x;
public:
	Base(int i)
	{
		x = i;
		cout << "constructing Base\n";
	}
	~Base()
	{
		cout << "destructing Base\n";
	}
	void show()
	{
		cout << "x = " << x << endl;
	}
};

class Derived :public Base    //ผฬณะ
{
private:
	Base d;
public:
	Derived(int i):Base(i),d(i)
	{
		
		cout << "constructing Derived\n";
	}
	~Derived()
	{
		cout << "destructing Derived\n";
	}
};
//int main()
//{
//	Derived obj(100);
//	obj.show();
//	return 0;
//}