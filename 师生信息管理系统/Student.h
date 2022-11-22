#ifndef STUDENT
#define STUDENT
#include"People.h"
#include<iostream>
using namespace std;
class Student:public People
{
private:
	char speciality[20];      //רҵ
public:
	Student(char* na, char* id, int ag, char* num, char* spe):People(na,id,ag,num)
	{
		strcpy(speciality, spe);
	}
	char* GetSpe()
	{
		return speciality;
	}
};
#endif
