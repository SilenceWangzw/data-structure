#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//��ʼ��
void SeqListInit(SL* ps)
{
	ps->data = NULL;
	ps->size = 0;
	ps->capacity = 0;
}


//����
void SeqListCheckCapacity(SL* ps)
{
	//���˳���Ϊ�գ���4���ռ䣬�����Ϊ�գ�����2��
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->data, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("reallocʧ��\n");
			exit(-1);
		}
		ps->data = tmp;
		ps->capacity = newcapacity;
	}
}


//��ӡ
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->data[ps->size] = x;
	ps->size++;
}


//βɾ
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}


//ͷ��
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


//ͷɾ
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