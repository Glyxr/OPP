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
	Student(const Student& per)//����
	{
		
	}
	~Student() {}
	void Input()
	{
		//count++;
		cout << "�������ѧ�����������ò��Գɼ�(0-10):";
		cin >> test_class[0] >> test_class[1];
		cout << "�������ѧ�������п��Գɼ�(0-100):";
		cin >> test_mid;
		cout << "�������ѧ������ĩ���Գɼ�(0-100):";
		cin >> test_final;
		cout << "�ɼ�����ɹ���" << endl;
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
		//cout << "��" << count << "��ѧ������ϢΪ:" << endl;
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

