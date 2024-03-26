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


//����
int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->data[i] == x)
		{
			return i;//�����±�
		}
	}
	return -1;
}


//ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SeqListCheckCapacity(ps);
	//Ų������
	for (int end = ps->size - 1; end >= pos; end--)
	{
		ps->data[end + 1] = ps->data[end];
	}
	ps->data[pos] = x;
	ps->size++;
}


//ָ��pos�±�λ��ɾ��
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size - 1);
	for (int begin = pos; begin < ps->size - 1; begin++)
	{
		ps->data[begin] = ps->data[begin + 1];
	}
	ps->size--;
}