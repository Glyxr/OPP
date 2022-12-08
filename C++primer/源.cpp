#include<iostream>
using namespace std;
//int main()
//{
//	clock_t end,start;
//	start = clock();
//	for (int i = 0; i <= 1000; i++)
//		printf("yuanxianrui");
//	end = clock();
//	int a =  end - start;
//	start = clock();
//	for(int i = 0;i<= 1000;i++)
//	    cout << "yuanxianrui" << endl;
//	end = clock();
//	int b = end - start;
//	cout << a << "      " << b << endl;
//	return 0;
//}
#include"sales_item.h"
//int main()
//{
//
//	Sales_item  curral, val;
//	if (cin >> curral)
//	{
//		int cnt = 1;
//		while (cin >> val)
//		{
//			if (val.isbn() == curral.isbn())
//				++cnt;
//			else
//			{
//				cout << cnt << endl;
//				curral = val;
//				cnt = 1;
//			}
//		}
//		cout <<cnt<< endl;
//	}
//	return 0;
//}


//2022/12/8 cout直接打印出true，false
//int main()
//{
//	cout << boolalpha << true << endl;
//	cout << noboolalpha << true << endl;
//	return 0;
//} 
int main()
{
	unsigned a = -1;
	bool c = true, b = false;
	bool p = c + b;
	int v = 0;
	cout << boolalpha << c << endl;
	cout << c + b << endl;
	cout << a << endl;
	/*signed char ch = 258723131414;
	cout << ch << endl;*/
	int a1 = 017;
	cout << a1 << endl;
	cout << "yuanxianeui"
		 "yuanxiarui" << endl;
	cout <<"你好" << endl;
	std::string A("nihao");
	std::string B(A);
	cout << B << endl;
	return 0;
}