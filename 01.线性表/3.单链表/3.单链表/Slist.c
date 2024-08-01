#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"

//��ӡ
void SListPrint(SListNode* phead)
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
SListNode* BuySListNode(SListDataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListDataType));
	if (newnode == NULL)
	{
		printf("������ʧ��\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


//β��
void SListPushBack(SListNode** phead, SListDataType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else 
	{
		//�ҵ�β���
		SListNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//����Ԫ��
		tail->next = newnode;
	}
}


//βɾ
void SListPopBack(SListNode** phead)
{
	//1.��
	if (*phead == NULL)
	{
		return;
	}
	//2.һ�����
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	//3.һ�����Ͻ��
	else
	{
		SListNode* prev = NULL;
		SListNode* tail = *phead;
		while (tail->next != NULL)
		{
			prev = tail;//����tail��ǰһ�����
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}

