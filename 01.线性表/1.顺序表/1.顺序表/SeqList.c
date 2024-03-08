#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"


//˳����ʼ��
void SeqListInit(SL* ps)
{
	assert(ps);
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("����ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}


//�������
void SeqListCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size >= ps->capacity) 
	{
		ps->capacity = ps->capacity * 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
}


//��ӡ˳���
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}


//β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;//ֱ���ڱ�β����
	ps->size++;
}


//βɾ
void SeqListPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}


//ͷ��
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	for (int i = ps->size - 1; i >= 0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}


//ͷɾ
void SeqListPopFront(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}


//����λ�ò���(posΪҪɾ��Ԫ�ص��±�)
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}


//����λ��ɾ��
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	int i = pos;
	while (i < ps->size - 1)
	{
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->size--;

}


//����Ԫ�أ������������±꣬�Ҳ����򷵻�-1
int SeqListFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

