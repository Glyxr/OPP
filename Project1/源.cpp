#include<iostream>
#include<math.h>
#include<time.h>
#include<algorithm>
using namespace std;
//实验二任务一
double triangleArea(const double* parray)
{
	double a = parray[0];
	double b = parray[1];
	double c = parray[2];
	double p = (0.5) * (a + b + c);
	return sqrt(p*(p-a)*(p-c)*(p-b));
}
//任务二重载函数
int commondivisor(int x1, int x2)
{
	for (int i = x1; i >= 1; i--)
	{
		if (x1 % i == 0 && x2 % i == 0)
		{
			cout << x1<<"," << x2 << "的最大公约数为：" << i << endl;
			return 0;
		}
	}
}
int commondivisor(int x1, int x2, int x3)
{
	for (int i = x1; i >= 1; i--)
	{
		if (x1 % i == 0 && x2 % i == 0 && x3 %i == 0)
		{
			cout << x1 << "," << x2<<","<< x3 << "的最大公约数为：" << i << endl;
			return 0;
		}
	}
}
int commondivisor(int x1, int x2, int x3, int x4)
{
	for (int i = x1; i >= 1; i--)
	{
		if (x1 % i == 0 && x2 % i == 0 && x3 % i == 0 && x4 % i == 0)
		{
			cout << x1 << "," << x2 << "," << x3 <<","<<x4 << "的最大公约数为：" << i << endl;
			return 0;
		}
	}
}
//任务三内联函数
inline const string& shorterString(const string& s1, const string& s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

const string& ShorterString(const string& s1, const string& s2)
{
	if (s1.size() <= s2.size())
		return s1;
	else
		return s2;
}
//任务4
bool myfunction(int i, int j) { return (i < j); }//升序排列
bool myfunction2(int i, int j) { return (i > j); }//降序排列
double sortArray(double* parray, int flag = 0)
{
	if (flag == 0)
		sort(parray, parray + 9, myfunction);
	else
		sort(parray, parray + 9, myfunction2);
	cout << "排序后的结果为：";
	for (int i = 0; i < 9; i++)
		cout << parray[i] ;
	return 1;
}
int main()
{
	//test1
	cout << "test1"<<endl;
	double a[3] = { 3,4,5 };
	cout<<triangleArea(a)<<endl;
	//test2
	cout << "test2"<<endl;
	commondivisor(2, 6);
	commondivisor(2, 3, 4);
	commondivisor(10, 2, 4, 8);
	//test3
	cout << "test3" << endl;
	clock_t start, end;
	start = clock();
	for (int i = 0; i <= 10000; i++)
		shorterString("yuan","rui");
	end = clock();
	cout << "内联函数执行10000次需要的时间：" << end-start << endl;
	start = clock();
	for (int i = 0; i <= 10000; i++)
		ShorterString("yuan", "rui");
	end = clock();
	cout << "普通函数执行10000次需要的时间：" << end - start << endl;
	//test4
	cout << "test4" << endl;
	double b[9] = { 2,8,9,4,6,7,3,1,5 };
	sortArray(b, 0);
	cout << "\n";
	sortArray(b, 1);

	return 0;
}