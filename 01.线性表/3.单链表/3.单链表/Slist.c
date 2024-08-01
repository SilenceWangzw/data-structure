#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"

//打印
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


//申请结点
SListNode* BuySListNode(SListDataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListDataType));
	if (newnode == NULL)
	{
		printf("申请结点失败\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


//尾插
void SListPushBack(SListNode** phead, SListDataType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else 
	{
		//找到尾结点
		SListNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//插入元素
		tail->next = newnode;
	}
}


//尾删
void SListPopBack(SListNode** phead)
{
	//1.空
	if (*phead == NULL)
	{
		return;
	}
	//2.一个结点
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	//3.一个以上结点
	else
	{
		SListNode* prev = NULL;
		SListNode* tail = *phead;
		while (tail->next != NULL)
		{
			prev = tail;//保存tail的前一个结点
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}

