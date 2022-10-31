#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
protected:
	char* name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
	static int count;//实际学生个数
public:
	Student();
	Student(char* na, char* id, char* num, char* spec, int ag);
	Student(const Student& per);
	~Student();
	char* GetName() const;//常成员函数(不能修改变量)
	char* GetID();
	char* GetNumber();
	char* GetSpec();
	int GetAge() const;
	void Display()const;
	void Input();
	void Insert();
	void Delete();
	static int GetCount();//专门用来访问静态数据成员
};
#endif

