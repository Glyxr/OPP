#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

//1
//int& function(int v, int* p, int& r)
//{
//	v = (*p)++;
//	*p = 100;
//	p = new int;
//	*p = 1000;
//	r = v + (*p)++;
//	delete p;
//	return v;
//}
//
//
//void swap(int x, int y)
//{
//	int temp;
//	temp = x; x = y; y = temp;
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

/******************** 主函数 ********************/

//int main()
//{
//	cout << "---------------------------" << endl;
//	//1. 传值，传址和传引用分析
//	int a = 1, b = 2, c = 3;
//	cout << "---------------------------" << endl;
//	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
//	function(a, &b, c);
//	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
//	//2. 引用规律分析
//	int& r = a;
//	r = a + b + c;
//	a = r + a + b + c;
//	cout << "r = " << endl;
//	cout << "a = " << a << endl;
//	cout << "&r = " << &r << endl;
//	cout << "&a = " << &a << endl;
//	cout << "---------------------------" << endl;
//	//3. 局部变量存储分析
//	int i = 10, j = 20, k = 30;
//	cout << "变量i的地址：" << &i << endl;
//	cout << "变量j的地址：" << &j << endl;
//	cout << "变量k的地址：" << &k << endl;
//	//4. 动态内存申请分析
//	int(* p1)[10] = new int[10][10];
//	int(* p2)[10][20][30] = new int[10][10][20][30];
//	cout << "变量p1地址：" << &p1 << endl;
//	cout << "变量p2地址：" << &p2 << endl;
//	cout << "变量p1指向的地址：" << p1 << endl;
//	cout << "变量p2指向的地址：" << p2 << endl;
//	system("pause");
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
//int main()
//{
//	find();
//	return 0;
//}

#include<stdio.h>
int MAX(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int a[10] ;
	int i, j, k, n;
	cout << "请输入木棍的数目：";
	cin >> n;
	cout << "请输入木棍的长度：";
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	int ans = 0;	//周长答案
	int ans1 = 0;   //面积
	//让i < j < k 这样棍子就不会被重复选取了 
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (k = j + 1; k < n; k++) {
				int l = a[i] + a[j] + a[k];	//周长 
				double p = (0.5) * l;
				int s = sqrt(p * (p - a[i]) * (p - a[j]) * (p - a[k]));
				int max = MAX(a[i], MAX(a[j], a[k]));	//找出最长的棍子 
				int rest = l - max;	//其余两根棍子的长度之和 
				//如果可以构成三角形，则更新最大周长 ,面积
				if (rest > max) {
					ans = MAX(ans, l);
					ans1 = MAX(ans1,s);
				}
			}
		}
	}
	cout << "最大的周长：" << ans << endl;
	cout << "最大的面积：" << ans1 << endl;
	return 0;
}

