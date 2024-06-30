#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//À≥–Ú±Ì≥ı ºªØ
void SeqListInit(SeqList* ps)
{
	ps->data = NULL;
	ps->size = 0;
	ps->capacity = 0;
}


//¥Ú”°
void SeqListPrint(SeqList* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//¿©»›
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


//Œ≤≤Â
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->data[ps->size] = x;
	ps->size++;
}


//Õ∑≤Â
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
