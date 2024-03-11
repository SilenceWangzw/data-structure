#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"

//打印链表
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;//指针往后移一个结点
	}
	printf("NULL\n");
}

//创建结点
SLTDataType* BuyListNode(SLTDataType x)
{
	SLTNode* newNode = (SLTDataType*)malloc(sizeof(SLTDataType));
	if (newNode == NULL)
	{

	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

//尾插
void SlistPushBack(SLTNode** phead, SLTDataType x)
{
	SLTNode* newNode = BuyListNode(x);
	if (*phead == NULL)//如果链表为空
	{
		*phead = newNode;
	}
	else 
	{
		SLTNode* tail = *phead;
		while (tail->next != NULL)//找到尾结点，尾结点的标志是next为空
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}


//头插
void SlistPushFront(SLTNode** phead, SLTDataType x)
{
	SLTNode* newNode = BuyListNode(x);
	newNode->next = *phead;
	(*phead) = newNode;
}
