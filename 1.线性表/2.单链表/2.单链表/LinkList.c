#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


//��ӡ����
void ListPrint(LinkList* phead)
{
	LNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


//������
LNode* BuyListNode(ListDataType x)
{
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL)
	{
		printf("������ʧ��\n");
		return;
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}


//β��
void ListPushBack(LinkList** pphead, ListDataType x)
{
	//������
	LNode* newNode = BuyListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//�ҵ�β���
		LNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//����Ԫ��
		tail->next = newNode;
	}
}


//βɾ
void ListPopBack(LinkList** pphead)
{
	//1.����Ϊ��
	if (*pphead == NULL)
	{
		return;
	}
	//2.ֻ��һ������
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.�������
	else
	{
		LNode* tail = *pphead;//��β���
		LNode* prev = NULL;//����β���֮ǰ��һ�����
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}


//ͷ��
void ListPushFront(LinkList** pphead, ListDataType x)
{
	//������
	LNode* newNode = BuyListNode(x);

	//��������
	//1.����Ϊ��
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	//2.����Ϊ��
	else
	{
		newNode->next = *pphead;
		*pphead = newNode;
	}
	
}


//ͷɾ
void ListPopFront(LinkList** pphead)
{
	//1.����Ϊ��
	if (*pphead == NULL)
	{
		return;
	}
	//2.һ������
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.�������
	else
	{
		LNode* q = (*pphead)->next;//�����һ��������һ������ַ
		*pphead = q;
	}
}


//����Ԫ��
LNode* ListFind(LinkList* pphead, ListDataType x)
{
	LNode* cur = pphead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}