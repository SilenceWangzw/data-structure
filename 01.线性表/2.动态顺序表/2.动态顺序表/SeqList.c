#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//˳����ʼ��
void SeqListInit(SeqList* ps)
{
	ps->data = NULL;
	ps->size = 0;
	ps->capacity = 0;
}


//��ӡ
void SeqListPrint(SeqList* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//����
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


//β��
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->data[ps->size] = x;
	ps->size++;
}


//ͷ��
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


//βɾ
void SeqListPopBack(SeqList* ps)
{
	assert(ps->size > 0);
	ps->size--;
}


//ͷɾ
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


//ָ��posλ�ò���
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


//ָ��posλ��ɾ��
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


//����
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


//�޸�
int SeqListModify(SeqList* ps, int pos, SLDataType x)
{
	assert(pos < ps->size);
	ps->data[pos] = x;
}


//����
void SeqListDestory(SeqList* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
