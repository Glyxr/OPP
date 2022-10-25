#include<iostream>
using namespace std;
#include"my.h"
const int N = 10;
void menu();
void OutputStu(const Student* array);
void InputStu(Student* array);
int SearchStu(const Student* array, char* na);
bool InsertStu(Student* array);
bool DeleteStu(Student* array, char* na);
int main()
