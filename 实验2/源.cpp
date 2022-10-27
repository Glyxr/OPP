#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

//1
//int& function(int v, int* p, int& r)
//{
//	v = (*p)++;
//
//	*p = 100;
//
//	p = new int;
//
//	*p = 1000;
//
//	r = v + (*p)++;
//
//	delete p;
//
//	return v;
//}
//
//
//void swap(int x, int y)
//{
//	int temp;
//	temp = x; x = y; y = temp;
//
//}
//void swap(int* x, int* y)
//{
//	int temp;
//	temp = *x; *x = *y; *y = temp;
//}
//
//
//void swap(int& x, int& y)
//{
//	int temp;
//	temp = x; x = y; y = temp;
//}
//
///******************** 主函数 ********************/
//
//int main()
//{
//
//	cout << "---------------------------" << endl;
//
//	//1. 传值，传址和传引用分析
//	int a = 1, b = 2, c = 3;
//	cout << "---------------------------" << endl;
//	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
//	function(a, &b, c);
//	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
//
//
//	//2. 引用规律分析
//	int& r = a;
//	r = a + b + c;
//	a = r + a + b + c;
//	cout << "r = " << endl;
//	cout << "a = " << a << endl;
//
//	cout << "&r = " << &r << endl;
//	cout << "&a = " << &a << endl;
//
//
//
//	cout << "---------------------------" << endl;
//
//	//3. 局部变量存储分析
//	int i = 10, j = 20, k = 30;
//
//	cout << "变量i的地址：" << &i << endl;
//	cout << "变量j的地址：" << &j << endl;
//	cout << "变量k的地址：" << &k << endl;
//
//
//	//4. 动态内存申请分析
//	int(* p1)[10] = new int[10][10];
//	int(* p2)[10][20][30] = new int[10][10][20][30];
//
//	cout << "变量p1地址：" << &p1 << endl;
//	cout << "变量p2地址：" << &p2 << endl;
//
//	cout << "变量p1指向的地址：" << p1 << endl;
//	cout << "变量p2指向的地址：" << p2 << endl;
//
//
//	system("pause");
//
//	return 0;
//}
//2
//void find()
//{
//	int n = 4;
//	int* p = new int[n];
//	int count = 0;
//	for (int i = 100; i <= 999; i++)
//	{
//		int tmp;
//		int a, b, c;
//		tmp = i;
//		a = tmp % 10;
//		tmp = tmp / 10;
//		b = tmp % 10;
//		c = tmp / 10;
//		if (a*a*a + b*b*b + c*c*c == i)
//		{
//			p[count] = i;
//			count++;
//		}
//	}
//	cout << "100-999所有的水仙花数：";
//	for (int i = 0; i < 4; i++)
//		cout << p[i] << " ";
//	delete[] p;
//}
