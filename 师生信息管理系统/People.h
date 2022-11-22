#ifndef PEOPLE
#define PEOPLE
#include<iostream>
using namespace std;
class People
{
private:
	char* name;        //����
	char ID[10];            //��ݺ�
	int age;           //����
	char number[20];         //ѧ��||����
public:
	People(char* na, char* id, int ag, char* num);
	People(const People& per);
	~People();
	char* GetName();
	char* GetID();
	int GetAge();
	char* GetNumber();
};
People::People(char* na, char* id, int ag, char* num)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
	}
	strcpy(ID, id);
	strcpy(number, num);
	age = ag;
}
People::People(const People& per)
{
	if (per.name)
	{
		this->name = new char[strlen(per.name) + 1];
	}
	strcpy(this->ID, per.ID);
	strcpy(this->name, per.name);
	this->age = per.age;
}
People::~People()
{
	delete[] name;
}
char* People::GetName()
{
	return name;
}
char* People::GetID()
{
	return ID;
}
char* People::GetNumber()
{
	return number;
}
int People::GetAge()
{
	return age;
}
#endif
