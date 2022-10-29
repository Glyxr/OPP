#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

double Max(double a, double b)
{
	return a > b ? a : b;
}
class triangle
{
private:
	double a[3];
public:
	triangle(double x1, double x2, double x3);
	~triangle() {}
	bool Istriangele() const;
	double GetPrimeter()const;
	double GetS()const;
	
	int Typetriangle();//0不行，1锐角，2直角，3，钝角
};
triangle::triangle(double x1, double x2, double x3)
{
	a[0] = x1;
	a[1] = x2;
    a[2] = x3;
}

bool triangle::Istriangele() const
{
	double max = Max(a[0], Max(a[1], a[2]));
	double rest = (a[0]+a[1]+a[2]) - max;
	if (rest > max)
		return true;
	else
		return false;
}
double triangle::GetPrimeter() const
{
	if (Istriangele())
		return a[0] + a[1] + a[2];
	else
	{
		cout << "不是三角形，无法计算周长。";
		return -1;
	}
}
double triangle::GetS() const
{
	if (Istriangele() == false)
	{
		cout << "不是三角形，无法计算面积。";
		return -1;
	}
	double p = (0.5) * (a[0] + a[1] + a[2]);
	return sqrt(p * (p - a[0]) * (p - a[1]) * (p - a[2]));
}

int triangle::Typetriangle()
{
	if (Istriangele() == false) {
		cout << "不是三角形，无法判断类型。";
		return 0;
	}
	sort(a, a + 3);
	if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2])
		return 1;
	else if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
		return 2;
	else
		return 3;
}
int main()
{
	triangle a(5, 4, 3);
	cout << "是否能构成三角形：" << a.Istriangele() << endl;
	cout<<"三角形的周长为："<<a.GetPrimeter()<<endl;
	cout << "三角形的面积为：" << a.GetS() << endl;
	cout << "三角形的类型为：" << a.Typetriangle() << endl;
	return 0;
}