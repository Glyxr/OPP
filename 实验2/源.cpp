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

/******************** ������ ********************/

//int main()
//{
//	cout << "---------------------------" << endl;
//	//1. ��ֵ����ַ�ʹ����÷���
//	int a = 1, b = 2, c = 3;
//	cout << "---------------------------" << endl;
//	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
//	function(a, &b, c);
//	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
//	//2. ���ù��ɷ���
//	int& r = a;
//	r = a + b + c;
//	a = r + a + b + c;
//	cout << "r = " << endl;
//	cout << "a = " << a << endl;
//	cout << "&r = " << &r << endl;
//	cout << "&a = " << &a << endl;
//	cout << "---------------------------" << endl;
//	//3. �ֲ������洢����
//	int i = 10, j = 20, k = 30;
//	cout << "����i�ĵ�ַ��" << &i << endl;
//	cout << "����j�ĵ�ַ��" << &j << endl;
//	cout << "����k�ĵ�ַ��" << &k << endl;
//	//4. ��̬�ڴ��������
//	int(* p1)[10] = new int[10][10];
//	int(* p2)[10][20][30] = new int[10][10][20][30];
//	cout << "����p1��ַ��" << &p1 << endl;
//	cout << "����p2��ַ��" << &p2 << endl;
//	cout << "����p1ָ��ĵ�ַ��" << p1 << endl;
//	cout << "����p2ָ��ĵ�ַ��" << p2 << endl;
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
//	cout << "100-999���е�ˮ�ɻ�����";
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
	cout << "������ľ������Ŀ��";
	cin >> n;
	cout << "������ľ���ĳ��ȣ�";
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	int ans = 0;	//�ܳ���
	int ans1 = 0;   //���
	//��i < j < k �������ӾͲ��ᱻ�ظ�ѡȡ�� 
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (k = j + 1; k < n; k++) {
				int l = a[i] + a[j] + a[k];	//�ܳ� 
				double p = (0.5) * l;
				int s = sqrt(p * (p - a[i]) * (p - a[j]) * (p - a[k]));
				int max = MAX(a[i], MAX(a[j], a[k]));	//�ҳ���Ĺ��� 
				int rest = l - max;	//�����������ӵĳ���֮�� 
				//������Թ��������Σ����������ܳ� ,���
				if (rest > max) {
					ans = MAX(ans, l);
					ans1 = MAX(ans1,s);
				}
			}
		}
	}
	cout << "�����ܳ���" << ans << endl;
	cout << "���������" << ans1 << endl;
	return 0;
}

