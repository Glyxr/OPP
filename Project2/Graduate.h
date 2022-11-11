#ifndef _Graduate
#define _Graduate
#include<iostream>
#include"Student.h"
using namespace std;
class Graduate :public Student
{
protected:
	char tutor[20];//导师
	char research[50];//研究方向
public:
	Graduate()//没有返回类型，
	{
		name = NULL;
		age = 20;
	}
	~Graduate() {}
};
#endif