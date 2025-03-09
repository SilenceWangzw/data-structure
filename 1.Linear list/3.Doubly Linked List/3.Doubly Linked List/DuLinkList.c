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


//����
void ListDestory(DuLinkList* phead)
{
	assert(phead);
	//�����һ�����
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		//����ڶ������
		DLNode* curnext = cur->next;

		free(cur);
		cur = curnext;
	}

	free(phead);
	phead = NULL;
}


//��ʼ��
DLNode* ListInit()
{
	//����ͷ���
	DLNode* NewNode = BuyListNode(0);
	NewNode->next = NewNode;
	NewNode->prev = NewNode;
	return NewNode;
}


//��ӡ
void ListPrint(DuLinkList* phead)
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
void ListPushBack(DuLinkList* phead, DLTDataType x)
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
void ListPopBack(DuLinkList* phead)
{
	//�ҵ�β���
	DLNode* tail = phead->prev;

	//��¼β����ǰһ�����
	DLNode* tailprev = tail->prev;

	//ɾ������
	tailprev->next = tail->next;
	phead->prev = tailprev;

	//�ͷŽ��
	free(tail);
	tail = NULL;
}


//ͷ��
void ListPushFront(DuLinkList* phead, DLTDataType x)
{
	assert(phead);
	//�ҵ���һ�����
	DLNode* first = phead->next;

	//������
	DLNode* NewNode = BuyListNode(x);

	//��������
	NewNode->next = first;
	first->prev = NewNode;
	NewNode->prev = phead;
	phead->next = NewNode;
}


//ͷɾ
void ListPopFront(DuLinkList* phead)
{
	//�ҵ���һ�����
	DLNode* first = phead->next;

	//ɾ������
	phead->next = first->next;
	first->next->prev = phead;

	//�ͷŽ��
	free(first);
	first = NULL;
}

//����
DLNode* ListFind(DuLinkList* phead, DLTDataType x)
{
	assert(phead);
	DLNode* cur = phead->next;
	//��������
	while (cur != phead)
	{
		if(cur->data == x)
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
	//�ҵ�pos��ǰһ�����
	DLNode* posprev = pos->prev;

	//������
	DLNode* NewNode = BuyListNode(x);

	//��������
	posprev->next = NewNode;
	NewNode->prev = posprev;
	NewNode->next = pos;
	pos->prev = NewNode;
}


//ɾ��posλ�õ�ֵ
void ListErase(DLNode* pos)
{
	//�ҵ�pos��ǰһ�����
	DLNode* posprev = pos->prev;

	//ɾ��Ԫ��
	posprev->next = pos->next;
	pos->next->prev = posprev;

	//�ͷŽ��
	free(pos);
	pos = NULL;
}