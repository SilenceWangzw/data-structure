#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"


//打印数组
PrintArr(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
}


//直接插入排序
//时间复杂度O(n?) -- 1+2+3+...+n-1
void InsertSort(int* a, int n)
{
	//[0, end] 有序  end + 1位置的值插入进去，让[0, end + 1]也有序
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];//保存要插入的值
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}


//希尔排序
//直接插入排序基础上的优化
//先进行预排序，接近有序，然后再进行直接插入排序
void ShellSort(int* a, int n)
{

	int gap = n;//增量
	while (gap > 1)
	{
		//gap > 1时都是预排序
		//gap == 1时就是直接插入排序
		gap = gap / 2;

		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end = end - gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}