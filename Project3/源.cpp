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
	
	int Typetriangle();//0���У�1��ǣ�2ֱ�ǣ�3���۽�
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
		cout << "���������Σ��޷������ܳ���";
		return -1;
	}
}
double triangle::GetS() const
{
	if (Istriangele() == false)
	{
		cout << "���������Σ��޷����������";
		return -1;
	}
	double p = (0.5) * (a[0] + a[1] + a[2]);
	return sqrt(p * (p - a[0]) * (p - a[1]) * (p - a[2]));
}

int triangle::Typetriangle()
{
	if (Istriangele() == false) {
		cout << "���������Σ��޷��ж����͡�";
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
	cout << "�Ƿ��ܹ��������Σ�" << a.Istriangele() << endl;
	cout<<"�����ε��ܳ�Ϊ��"<<a.GetPrimeter()<<endl;
	cout << "�����ε����Ϊ��" << a.GetS() << endl;
	cout << "�����ε�����Ϊ��" << a.Typetriangle() << endl;
	return 0;
}