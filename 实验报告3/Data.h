#ifndef _DATA
#define DATA
#include<iostream>
using namespace std;
class Data
{
private:
	int year;
	int month;
	int day;
	//int* p;
public:
	Data(int x1, int x2, int x3)
	{
		year = x1;
		month = x2;
		day = x3;
	}
	Data() {}
	Data(const Data& per)
	{
		if (per.p != NULL)
		{
			this->p = new int[10];
		}
	}
	~Data() 
	{
		if (p != NULL)
			delete[] p;
	}
};
#endif // !DATA
