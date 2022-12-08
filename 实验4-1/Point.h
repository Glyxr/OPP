#ifndef _POINT
#define _POINT
#include<iostream>
#include<math.h>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	//��ʼ��������
	Point(int n, int m)
	{
		this->x = n;
		this->y = m;
	}
	Point(const Point& per)
	{
		this->x = per.x;
		this->y = per.y;
	}
	~Point() {}
	//����
	void Change(int x_, int y_)
	{
		this->x = x_;
		this->y = y_;
		cout << "�����޸ĳɹ�������" << endl;
	}
	void Print()
	{
		cout << "x = " << x <<" "<<"y = "<< y << endl;
	}
	friend double distance(Point&, Point&);
};
double distance(Point& A, Point& B)
{
	return sqrt((A.x - B.x) * (A.x - B.x) - (A.y - B.y) * (A.y - B.y));
}
#endif
