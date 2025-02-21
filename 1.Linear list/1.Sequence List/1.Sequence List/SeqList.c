#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//��ʼ��
void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->data = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->data == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}


//��ӡ
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//����
void SeqListCheckCapacity(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->data = (SLDataType*)realloc(ps->data, sizeof(SLDataType) * ps->capacity);
		if (ps->data == NULL)
		{
			printf("�����ڴ�ʧ��\n");
			exit(-1);
		}
	}
}


//β��
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps);
	//������ˣ�Ҫ����
	SeqListCheckCapacity(ps);
	//��������
	ps->data[ps->size] = x;
	ps->size++;
}


//βɾ
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}


//ͷ��
void SeqListPushFront(SeqList* ps, SLDataType x)
{
	assert(ps);
	//�������Ҫ����
	SeqListCheckCapacity(ps);

	//�ƶ�����
	for (int end = ps->size - 1; end >= 0; end--)
	{
		ps->data[end + 1] = ps->data[end];
	}

	//��������
	ps->data[0] = x;
	ps->size++;
}


//ͷɾ
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	for (int start = 0; start < ps->size - 1; start++)
	{
		ps->data[start] = ps->data[start + 1];
	}
	ps->size--;
}


//����λ�ò���(�±�)
void SeqListInsert(SeqList* ps, int pos, SLDataType x)
{
	assert(ps);
	if (pos<0 || pos>ps->size)
	{
		printf("����λ�ò��Ϸ�\n");
		return;
	}
	//����
	SeqListCheckCapacity(ps);

	for (int i = ps->size; i >= pos; i--)
	{
		ps->data[i + 1] = ps->data[i];
	}
	ps->data[pos] = x;
	ps->size++;
}


//����λ��ɾ��(�±�)
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	if (pos<0 || pos >ps->size - 1)
	{
		printf("ɾ��λ�ò��Ϸ�\n");
		return;
	}

	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
}


//����Ԫ�أ������±�
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