#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


//打印链表
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


//申请结点
LNode* BuyListNode(ListDataType x)
{
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL)
	{
		printf("申请结点失败\n");
		return;
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}


//尾插
void ListPushBack(LinkList** pphead, ListDataType x)
{
	//申请结点
	LNode* newNode = BuyListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//找到尾结点
		LNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//插入元素
		tail->next = newNode;
	}
}


//尾删
void ListPopBack(LinkList** pphead)
{
	//1.链表为空
	if (*pphead == NULL)
	{
		return;
	}
	//2.只有一个数据
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.多个数据
	else
	{
		LNode* tail = *pphead;//找尾结点
		LNode* prev = NULL;//保留尾结点之前的一个结点
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}


//头插
void ListPushFront(LinkList** pphead, ListDataType x)
{
	//申请结点
	LNode* newNode = BuyListNode(x);

	//插入数据
	//1.链表为空
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	//2.链表不为空
	else
	{
		newNode->next = *pphead;
		*pphead = newNode;
	}
	
}


//头删
void ListPopFront(LinkList** pphead)
{
	//1.链表为空
	if (*pphead == NULL)
	{
		return;
	}
	//2.一个数据
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.多个数据
	else
	{
		LNode* q = (*pphead)->next;//保存第一个结点的下一个结点地址
		*pphead = q;
	}
}


//查找元素
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