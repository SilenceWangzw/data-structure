#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"


int main()
{
	int a[] = { 3,5,2,7,8,6,1,9,4,0 };
	int sz = sizeof(a) / sizeof(a[0]);

	//ֱ�Ӳ�������
	//InsertSort(a, sz);
	//PrintArr(a, sz);

	//ϣ������
	ShellSort(a, sz);
	PrintArr(a, sz);

}