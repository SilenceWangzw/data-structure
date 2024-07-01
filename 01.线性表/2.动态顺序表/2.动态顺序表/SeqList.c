#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//顺序表初始化
void SeqListInit(SeqList* ps)
{
	ps->data = NULL;
	ps->size = 0;
	ps->capacity = 0;
}


//打印
void SeqListPrint(SeqList* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//扩容
void SeqListCheckCapacity(SeqList* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->data, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->data = tmp;
			ps->capacity = newcapacity;
		}
	}
}


//尾插
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->data[ps->size] = x;
	ps->size++;
}


//头插
void SeListPushFront(SeqList* ps, SLDataType x)
{
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


//尾删
void SeqListPopBack(SeqList* ps)
{
	assert(ps->size > 0);
	ps->size--;
}


//头删
void SeqListPopFront(SeqList* ps)
{
	assert(ps->size > 0);
	int start = 0;
	while (start < ps->size - 1)
	{
		ps->data[start] = ps->data[start + 1];
		start++;
	}
	ps->size--;
}


//指定pos位置插入
void SeqListInsert(SeqList* ps, int pos, SLDataType x)
{
	assert(pos <= ps->size);
	SeqListCheckCapacity(ps);
	
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->data[end + 1] = ps->data[end];
		end--;
	}
	ps->data[pos] = x;
	ps->size++;
}


//指定pos位置删除
void SeqListDelete(SeqList* ps, int pos)
{
	assert(ps->size > 0);
	int start = pos;
	while (start < ps->size - 1)
	{
		ps->data[start] = ps->data[start + 1];
		start++;
	}
	ps->size--;
	
}


//查找
int SeqListFind(SeqList* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->data[i] == x)
		{
			return i;
		}
	}
	return -1;
}


//修改
int SeqListModify(SeqList* ps, int pos, SLDataType x)
{
	assert(pos < ps->size);
	ps->data[pos] = x;
}


//销毁
void SeqListDestory(SeqList* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
