#define _CRT_SECURE_NO_WARNINGS
#include"DuLinkList.h"

//������
DLNode* BuyListNode(DLTDataType x)
{
	DLNode* NewNode = (DLNode*)malloc(sizeof(DLNode));
	NewNode->data = x;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	return NewNode;
}


//��ʼ��
DLNode* ListInit()
{
	DLNode* NewNode = BuyListNode(0);
	NewNode->next = NewNode;
	NewNode->prev = NewNode;
	return NewNode;
}


//��ӡ
void ListPrint(DLinkList* phead)
{
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


//β��
void ListPushBack(DLinkList* phead, DLTDataType x)
{
	assert(phead);
	//�ҵ�β���
	DLNode* tail = phead->prev;
	//������
	DLNode* NewNode = BuyListNode(x);

	//��������
	tail->next = NewNode;
	NewNode->prev = tail;
	NewNode->next = phead;
	phead->prev = NewNode;

}


//βɾ
void ListPopBack(DLinkList* phead)
{
	assert(phead);
	assert(phead->next != phead);
	//�ҵ�β���
	DLNode* tail = phead->prev;

	tail->prev->next = phead;
	phead->prev = tail->prev;
	free(tail);
	tail = NULL;
}


//ͷ��
void ListPushFront(DLinkList* phead, DLTDataType x)
{
	assert(phead);
	//������
	DLNode* NewNode = BuyListNode(x);
	//�ҵ���һ�����
	DLNode* first = phead->next;
	//��������
	phead->next = NewNode;
	NewNode->prev = phead;
	NewNode->next = first;
	first->prev = NewNode;
}


//ͷɾ
void ListPopFront(DLinkList* phead)
{
	assert(phead);
	assert(phead->next != phead);
	//�ҵ���һ�����
	DLNode* first = phead->next;
	phead->next = first->next;
	first->next->prev = phead;
	free(first);
	first = NULL;
}


//����
DLNode* ListFind(DLinkList* phead, DLTDataType x)
{
	assert(phead);
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}


//��posλ��֮ǰ����
void ListInsert(DLNode* pos, DLTDataType x)
{
	//������
	DLNode* NewNode = BuyListNode(x);

	//�ҵ�posǰ��Ľ��
	DLNode* prev = pos->prev;
	prev->next = NewNode;
	NewNode->prev = prev;
	NewNode->next = pos;
	pos->prev = NewNode;

}


//ɾ��posλ�õ�ֵ
void ListErase(DLNode* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	pos = NULL;
}


//����
void ListDestory(DLinkList* phead)
{
	assert(phead);
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		DLNode* next = cur->next;
		free(cur);
		cur = next;
	}

	free(phead);
	phead = NULL;
}