#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//��ʼ��
void SeqListInit(SL *s)
{
	//��ʽ1��
	//s.size = 0;
	//s.a = NULL;
	//s.capacity = 0;


	//��ʽ2��
	s->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (s->a == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	s->size = 0;
	s->capacity = 4;
}




//�������
void SeqListCheckCapacity(SL* ps)
{
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




//β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//���������Ҫ����
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}




//��ӡ
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}




//βɾ
void SeqListPopBack(SL* ps)
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
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
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}




//ͷɾ
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int start = 0;

	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}



//����λ�ò���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);