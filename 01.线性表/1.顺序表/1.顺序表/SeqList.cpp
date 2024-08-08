#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//初始化
void InitSeqList(SeqList* list)
{
	list->base = (ElemType*)malloc(sizeof(ElemType) * MaxSize);
	assert(list->base != NULL);
	list->capacity = MaxSize;
	list->size = 0;
}


//打印
void show_list(SeqList* list)
{
	int i = 0;
	for (i = 0; i < list->size; i++)
	{
		printf("%d ", list->base[i]);
	}
	printf("\n");
}


//尾插
void push_back(SeqList* list, ElemType x)
{
	if (list->size >= list->capacity)
	{
		printf("顺序表空间已满，不能尾部插入数据\n");
	}
	list->base[list->size] = x;
	list->size++;
}


//头插
void push_front(SeqList* list, ElemType x)
{
	if (list->size >= list->capacity)
	{
		printf("空间已满，不能头部插入\n");
	}

	int i = 0;
	for (i = list->size; i > 0; i--)
	{
		list->base[i] = list->base[i - 1];
	}
	list->base[0] = x;
	list->size++;
}


//尾删
void pop_back(SeqList* list)
{
	if (list->size == 0)
	{
		printf("顺序表已空，不能尾部删除数据\n");
	}
	list->size--;
}


//头删
void pop_front(SeqList* list)
{
	if (list->size == 0)
	{
		printf("顺序表为空，不能头部删除元素\n");
	}

	int i = 0;
	for (i = 0; i < list->size - 1; i++)
	{
		list->base[i] = list->base[i + 1];
	}
	list->size--;
}


//按位置插入
void insert_pos(SeqList* list, int pos, ElemType x)
{
	if (pos<0 || pos>list->size)
	{
		printf("插入数据的位置非法，不能插入数据\n");
		return;
	}

	int i = 0;
	for (i = list->size; i > pos; i--)
	{
		list->base[i] = list->base[i - 1];
	}
	list->base[pos] = x;
	list->size++;
}


//查找
int find(SeqList* list, ElemType x)
{
	int i = 0;
	for (i = 0; i < list->size; i++)
	{
		if (list->base[i] == x)
		{
			return i;
		}
	}
	return -1;
}


//求表长
int length(SeqList* list)
{
	return list->size;
}