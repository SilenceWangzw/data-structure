#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//��ʼ��
void SeqListInit(SeqList* ps)
{
	////��ʽ1
	//ps->data = NULL;
	//ps->size = 0;
	//ps->capacity = 0;


	//��ʽ2
	ps->data = (SQDataType*)malloc(sizeof(SQDataType) * 4);
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
		//���Ϊ��������ĸ�����Ϊ������������һ��
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->data, sizeof(SQDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
		ps->data = tmp;
		ps->capacity = newcapacity;
	}
}


//β��
void SeqListPushBack(SeqList* ps, SQDataType x)
{
	assert(ps);

	//���������Ҫ����
	SeqListCheckCapacity(ps);

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
void SeqListPushFront(SeqList* ps, SQDataType x)
{
	assert(ps);
	//�����������Ҫ����
	SeqListCheckCapacity(ps);

	//�ҵ����һ��Ԫ�ص��±�
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