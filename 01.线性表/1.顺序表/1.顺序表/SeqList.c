#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"


//顺序表初始化
void SeqListInit(SL* ps)
{
	assert(ps);
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("申请失败\n");
		exit(-1);
	}
	ps->capacity = 4;
	ps->size = 0;
}


//检查扩容
void SeqListCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size >= ps->capacity)
	{
		ps->capacity = ps->capacity * 2; //将容量扩大两倍
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
	}
}


//打印顺序表
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}


//尾插
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x; //直接在表尾插入
	ps->size++;
}


//尾删
void SeqListPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}


//头插
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;

}


//头删
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int start = 0;
	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}


//任意位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	void SeqListCheckCapacity(ps);
	for (int i = ps->size - 1; i >= pos - 1; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[pos - 1] = x;
	ps->size++;
}


//任意位置删除
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	for (int i = pos - 1; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
