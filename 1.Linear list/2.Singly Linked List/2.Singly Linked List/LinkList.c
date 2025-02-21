#define _CRT_SECURE_NO_WARNINGS
#include"LinkList.h"

//��ӡ
void SListPrint(LinkList* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


//������
SListNode* SListBuyNode(SListDataType x)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		printf("������ʧ��\n");
		exit(-1);
	}
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}


//β��
void SListPushBack(LinkList** phead, SListDataType x)
{
	//������
	SListNode* NewNode = SListBuyNode(x);

	if (*phead == NULL)
	{
		*phead = NewNode;
	}
	else
	{
		//�ҵ�β���
		SListNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = NewNode;
	}
}


//βɾ
void SListPopBack(LinkList** phead)
{
	//1.����Ϊ��
	if (*phead == NULL)
	{
		return;
	}
	//2.ֻ��һ������
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	//3.�������
	else
	{
		SListNode* tail = *phead;//��¼β���
		SListNode* prev = NULL;//��¼β����ǰһ�����
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}