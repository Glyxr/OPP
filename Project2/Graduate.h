#ifndef _Graduate
#define _Graduate
#include<iostream>
#include"Student.h"
using namespace std;
class Graduate :public Student
{
protected:
	char tutor[20];//��ʦ
	char research[50];//�о�����
public:
	Graduate()//û�з������ͣ�
	{
		name = NULL;
		age = 20;
	}
	~Graduate() {}
};
#endif