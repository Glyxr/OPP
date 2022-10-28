#include<iostream>
using namespace std;

int Max(int a, int b)
{
	return a > b ? a : b;
}
class triangle
{
private:
	double a, b, c;
public:
	triangle(double x1, double x2, double x3);
	~triangle() {}
	double GetPrimeter()const;
	double GetS()const;
	bool Istriangele() const;
	int What();//0²»ĞĞ£¬1Èñ½Ç£¬2Ö±½Ç£¬3£¬¶Û½Ç
};
triangle::triangle(double x1, double x2, double x3)
{
	a = x1;
	b = x2;
	c = x3;
}
double triangle::GetPrimeter() const
{
	return a + b + c;
}

double triangle::GetS() const
{
	double p = (0.5) * (a + b + c);
	return sqrt(p * (p - a) * (p - c) * (p - b));
}
bool triangle::Istriangele() const
{
	double max = Max(a, Max(b, c));
	double rest = GetPrimeter() - max;
	if (rest > max)
		return true;
	else
		return false;
}
int triangle::What()
{
	if (Istriangele() == false) return 0;
	
}
int main()
{
	triangle a(1, 2, 3);
}