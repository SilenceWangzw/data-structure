#define _CRT_SECURE_NO_WARNINGS
#include"LinkList.h"

//打印
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


//申请结点
SListNode* SListBuyNode(SListDataType x)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		printf("申请结点失败\n");
		exit(-1);
	}
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}


//尾插
void SListPushBack(LinkList** phead, SListDataType x)
{
	//申请结点
	SListNode* NewNode = SListBuyNode(x);

	if (*phead == NULL)
	{
		*phead = NewNode;
	}
	else
	{
		//找到尾结点
		SListNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = NewNode;
	}
}


//尾删
void SListPopBack(LinkList** phead)
{
	//1.链表为空
	if (*phead == NULL)
	{
		return;
	}
	//2.只有一个数据
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	//3.多个数据
	else
	{
		SListNode* tail = *phead;//记录尾结点
		SListNode* prev = NULL;//记录尾结点的前一个结点
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}