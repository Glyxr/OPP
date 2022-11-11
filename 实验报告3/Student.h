#ifndef _STUDENT
#define STUDENT
#include<iostream>
using namespace std;
class Student
{
private:
	double test_class[2];
	double test_mid;
	double test_final;
	double test_overall;
	char grade;
	//static int count;
public:
	Student()
	{
		grade = 'B';
	}
	Student(const Student& per)//拷贝
	{
		
	}
	~Student() {}
	void Input()
	{
		//count++;
		cout << "请输入该学生的两次随堂测试成绩(0-10):";
		cin >> test_class[0] >> test_class[1];
		cout << "请输入该学生的期中考试成绩(0-100):";
		cin >> test_mid;
		cout << "请输入该学生的期末考试成绩(0-100):";
		cin >> test_final;
		cout << "成绩输入成功！" << endl;
	}
	void Evaluate()
	{
		test_overall = (test_class[1] + test_class[0] + test_mid) * 0.25 + test_final * 0.5;
		printf("%d", test_overall);
		if (test_overall >= 90)
			grade = 'A';
		else if (test_overall >= 80)
			grade = 'B';
		else if (test_overall >= 70)
			grade = 'C';
		else if (test_overall >= 60)
			grade = 'D';
		else
			grade = 'E';
	}
	void Output()
	{
		//cout << "第" << count << "个学生的信息为:" << endl;
		cout << "test_class[0] = " << test_class[0] << endl;
		cout << "test_class[1] = " << test_class[1] << endl;
		cout << "test_mid = " << test_mid << endl;
		cout << "test_final = " << test_final << endl;
		cout << "test_overall = " << test_overall << endl;
		cout << "grade = " << grade << endl;
	}
};
//int Student::count = 0;
#endif // !Student

