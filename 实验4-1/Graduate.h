#ifndef _GRADUATE
#define _GRADUATE
#include<iostream>
#include<string>
#include<stdio.h>
#pragma warning(disable:4996)
using namespace std;
using std::string;
class Graduate
{
private:
	char* name;
	string gender;
	int ID;
	double score;
	string research;
	string tutor;
	const string university;
	static int count;   //计算总人数
	static double total_score;  //计算总成绩
public:
	Graduate(char* na, string gen, int id, double sco, string res, string tut) :university("SDNU")
	{
		if (na)
		{
			name = new char[strlen(na) + 1];
			strcpy(name, na);
		}
		gender = gen;
		ID = id;
		score = sco;
		research = res;
		tutor = tut;
		count++;
		total_score += score;
	}
	Graduate(const Graduate& per) :university(per.university)
	{
		if (per.name)
		{
			this->name = new char[strlen(per.name) + 1];
			strcpy(this->name, per.name);
		}
		gender = per.gender;
		ID = per.ID;
		score = per.score;
		research = per.research;
		tutor = per.tutor;
		count++;
		total_score += score;
	}
	~Graduate() { count--; total_score -= score; }
	void print_const() const
	{
		cout << "name = " << name << endl;
		cout << "gender = " << gender << endl;
		cout << "ID = " << ID << endl;
		cout << "score = " << score << endl;
		cout << "research = " << research << endl;
		cout << "tutor = " << tutor << endl;
		cout << "university =  " << university << endl;
	}
	void print()
	{
		cout << "name = " << name << endl;
		cout << "gender = " << gender << endl;
		cout << "ID = " << ID << endl;
		cout << "score = " << score << endl;
		cout << "research = " << research << endl;
		cout << "tutor = " << tutor << endl;
		cout << "university =  " << university << endl;
	}
	double mean()
	{
		return (double)(total_score / count);
	}
	friend void print_grade(Graduate);
};
int Graduate::count = 0;
double Graduate::total_score = 0;
void print_grade(Graduate A)
{
	if (A.score >= 90)
		cout << "A" << endl;
	else if (A.score >= 80)
		cout << "B" << endl;
	else if (A.score >= 70)
		cout << "C" << endl;
	else if (A.score >= 60)
		cout << "D" << endl;
	else
		cout << "E" << endl;
}
#endif
