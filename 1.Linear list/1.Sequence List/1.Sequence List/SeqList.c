#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//初始化
void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->data = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->data == NULL)
	{
		printf("申请内存失败\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}


//打印
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//扩容
void SeqListCheckCapacity(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->data = (SLDataType*)realloc(ps->data, sizeof(SLDataType) * ps->capacity);
		if (ps->data == NULL)
		{
			printf("开辟内存失败\n");
			exit(-1);
		}
	}
}


//尾插
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps);
	//如果满了，要扩容
	SeqListCheckCapacity(ps);
	//插入数据
	ps->data[ps->size] = x;
	ps->size++;
}


//尾删
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}


//头插
void SeqListPushFront(SeqList* ps, SLDataType x)
{
	assert(ps);
	//如果满了要扩容
	SeqListCheckCapacity(ps);

	//移动数据
	for (int end = ps->size - 1; end >= 0; end--)
	{
		ps->data[end + 1] = ps->data[end];
	}

	//插入数据
	ps->data[0] = x;
	ps->size++;
}


//头删
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	for (int start = 0; start < ps->size - 1; start++)
	{
		ps->data[start] = ps->data[start + 1];
	}
	ps->size--;
}


//任意位置插入(下标)
void SeqListInsert(SeqList* ps, int pos, SLDataType x)
{
	assert(ps);
	if (pos<0 || pos>ps->size)
	{
		printf("插入位置不合法\n");
		return;
	}
	//扩容
	SeqListCheckCapacity(ps);

	for (int i = ps->size; i >= pos; i--)
	{
		ps->data[i + 1] = ps->data[i];
	}
	ps->data[pos] = x;
	ps->size++;
}


//任意位置删除(下标)
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	if (pos<0 || pos >ps->size - 1)
	{
		printf("删除位置不合法\n");
		return;
	}

	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
}


//查找元素，返回下标
int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->data[i] == x)
		{
			return i;
		}
	}
	return -1;
}