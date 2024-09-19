#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


//��ӡ
void ListPrint(LNode* phead)
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
LNode* BuyListNode(LinkDataType x)
{
	LNode* newNode = (LinkDataType*)malloc(sizeof(LinkDataType));
	if (newNode == NULL)
	{
		printf("������ʧ��\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}


//β��
void ListPushBack(LNode** pphead, LinkDataType x)
{
	LNode* newNode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//����βָ��
		LNode* tail = *pphead;

		//�ҵ�β���
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//��������β��
		tail->next = newNode;
	}
	

}


//βɾ
void ListPopBack(LNode** pphead)
{
	//1.��
	//2.һ�����
	//3.������
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		LNode* tail = *pphead;
		LNode* prev = NULL;
		while (tail->next != NULL)
		{
			//�ҵ�β����ǰ��һ�����
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}