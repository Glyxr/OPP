//前面加上friend关键字修饰的，借助友元可以访问与其有好友关系的类中的私有成员，友元函数，友元类
//静态成员指的是c++在类中声明成员时可以加上static关键字
//实现多个对象共享数据
//本质全局变量和全局函数
//静态成员函数的定义与一般成员函数的定义相同，只是在其前面冠以static关键字
//访问静态成员
//（1）普通数据成员属于类的一个具体的对象，只有对象被创建了，普通数据成员才会被分配内存。而静态数据成员属于整个类，即使没有任何对象创建，类的静态数据成员变量也存在。
//（2）因为类的静态数据成员的存在不依赖与于任何类对象的存在，类的静态数据成员应该在代码中被显示的初始化，一定要在类外进行。
//（3）外部访问类的静态成员只能通过类名来访问，例如：test::getCount()。
//（4）类的静态成员函数无法直接访问普通数据成员（可以通过对象名间接的访问），而类的任何成员函数都可以访问类的静态数据成员。
//（5）静态成员和类的普通成员一样，也具有public、protected、private3种访问级别，也可以具有返回值、const修饰符等参数。
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int sum = 0, value = 0;
	while (cin >> value)
	{
		//cout << value << endl;
		sum += value;	
	}
	cout << sum << endl;
	return 0;
}
//int main()
//{
//	int curral = 0, val = 0;
//	if (cin >> curral)
//	{
//		int cnt = 1;
//		while (cin >> val)
//		{
//			if (val == curral)
//				++cnt;
//			else
//			{
//				cout << curral << "  " << cnt << endl;
//				curral = val;
//				cnt = 1;
//			}
//		}
//		cout << curral << "  " <<cnt<< endl;
//	}
//	return 0;
//}