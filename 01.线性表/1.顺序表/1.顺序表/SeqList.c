#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//初始化
void SeqListInit(SeqList* ps)
{
	////方式1
	//ps->data = NULL;
	//ps->size = 0;
	//ps->capacity = 0;


	//方式2
	ps->data = (SQDataType*)malloc(sizeof(SQDataType) * 4);
	if (ps->data == NULL)
	{
		printf("申请内存失败\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}


//销毁
void SeqListDestory(SeqList* ps)
{
	free(ps->data);
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
	if (ps->size >= ps->capacity)
	{
		//如果为空则分配四个，不为空扩大则扩大一倍
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->data, sizeof(SQDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
		ps->data = tmp;
		ps->capacity = newcapacity;
	}
}


//尾插
void SeqListPushBack(SeqList* ps, SQDataType x)
{
	assert(ps);

	//如果满了需要扩容
	SeqListCheckCapacity(ps);

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
void SeqListPushFront(SeqList* ps, SQDataType x)
{
	assert(ps);
	//如果容量满了要扩容
	SeqListCheckCapacity(ps);

	//找到最后一个元素的下标
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
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	int start = 0;
	while (start < ps->size - 1)
	{
		ps->data[start] = ps->data[start + 1];
		start++;
	}
	ps->size--;
}


//任意位置插入(下标)
void SeqListInsert(SeqList* ps, int pos, SQDataType x)
{
	assert(ps);
	assert(pos <= ps->size && pos >= 0);

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


//任意位置删除
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	int start = pos;
	while (start < ps->size - 1)
	{
		ps->data[start] = ps->data[start + 1];
		start++;
	}
	ps->size--;
}


//查找元素所在位置（返回下标）
int SeqListFind(SeqList* ps, SQDataType x)
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