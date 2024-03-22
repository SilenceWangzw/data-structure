#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//初始化
void SeqListInit(SL* ps)
{
	ps->data = NULL;
	ps->size = 0;
	ps->capacity = 0;
}


//扩容
void SeqListCheckCapacity(SL* ps)
{
	//如果顺序表为空，给4个空间，如果不为空，扩大2倍
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->data, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc失败\n");
			exit(-1);
		}
		ps->data = tmp;
		ps->capacity = newcapacity;
	}
}


//打印
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//尾插
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->data[ps->size] = x;
	ps->size++;
}


//尾删
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
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
		ps->data[end + 1] = ps->data[end];
		end--;
	}
	ps->data[0] = x;
	ps->size++;
}


//头删
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->data[begin] = ps->data[begin + 1];
		begin++;
	}
	ps->size--;
}