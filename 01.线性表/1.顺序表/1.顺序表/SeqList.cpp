#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//��ʼ��
void InitSeqList(SeqList* list)
{
	list->base = (ElemType*)malloc(sizeof(ElemType) * MaxSize);
	assert(list->base != NULL);
	list->capacity = MaxSize;
	list->size = 0;
}


//��ӡ
void show_list(SeqList* list)
{
	int i = 0;
	for (i = 0; i < list->size; i++)
	{
		printf("%d ", list->base[i]);
	}
	printf("\n");
}


//β��
void push_back(SeqList* list, ElemType x)
{
	if (list->size >= list->capacity)
	{
		printf("˳���ռ�����������β����������\n");
	}
	list->base[list->size] = x;
	list->size++;
}


//ͷ��
void push_front(SeqList* list, ElemType x)
{
	if (list->size >= list->capacity)
	{
		printf("�ռ�����������ͷ������\n");
	}

	int i = 0;
	for (i = list->size; i > 0; i--)
	{
		list->base[i] = list->base[i - 1];
	}
	list->base[0] = x;
	list->size++;
}


//βɾ
void pop_back(SeqList* list)
{
	if (list->size == 0)
	{
		printf("˳����ѿգ�����β��ɾ������\n");
	}
	list->size--;
}


//ͷɾ
void pop_front(SeqList* list)
{
	if (list->size == 0)
	{
		printf("˳���Ϊ�գ�����ͷ��ɾ��Ԫ��\n");
	}

	int i = 0;
	for (i = 0; i < list->size - 1; i++)
	{
		list->base[i] = list->base[i + 1];
	}
	list->size--;
}


//��λ�ò���
void insert_pos(SeqList* list, int pos, ElemType x)
{
	if (pos<0 || pos>list->size)
	{
		printf("�������ݵ�λ�÷Ƿ������ܲ�������\n");
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


//����
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


//���
int length(SeqList* list)
{
	return list->size;
}



//��λ��ɾ��Ԫ��
void delete_pos(SeqList* list, int pos)
{
	if (pos < 0 || pos >= list->size)
	{
		printf("ɾ�����ݵ�λ�÷Ƿ�������ɾ������\n");
		return;
	}
	int i = 0;
	for (i = pos; i < list->size; i++)
	{
		list->base[i] = list->base[i + 1];
	}
	list->size--;
}


//��ֵɾ��
void delete_val(SeqList* list, ElemType x)
{
	int pos = find(list, x);
	if (pos == -1)
	{
		printf("Ҫɾ�������ݲ�����\n");
	}
	else
	{
		delete_pos(list, pos);
	}
}


//����
void sort(SeqList* list)
{
	for (int i = 0; i < list->size - 1; i++)
	{
		for (int j = 0; j < list->size - 1 - i; j++)
		{
			if (list->base[j] > list->base[j + 1]);
			{
				ElemType tmp = list->base[j];
				list->base[j] = list->base[j + 1];
				list->base[j + 1] = tmp;
			}
		}
	}
}


//����˳���
void reverse(SeqList* list)
{
	if (list->size == 0 || list->size == 1)
	{
		return;
	}
	ElemType left = list->base[0];
	ElemType right = list->base[list->size - 1];
	while (left < right)
	{
		ElemType tmp = left;
		left = right;
		right = tmp;
		left++;
		right--;
	}
}


//���˳���
void clear(SeqList* list)
{
	list->size = 0;
}


//�ݻ�˳���
void destory(SeqList* list)
{
	free(list->base);
	list->base = NULL;
	list->capacity = 0;
	list->size = 0;
}