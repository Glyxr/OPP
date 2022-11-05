#include"Student.h"
int main()
{
	Student array[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		array[i].Input();
		array[i].Evaluate();
	}
	for (i = 0; i < 5; i++)
	{
		array[i].Output();
	}
	return 0;
}