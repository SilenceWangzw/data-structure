#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


//打印
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


//申请结点
LNode* BuyListNode(LinkDataType x)
{
	LNode* newNode = (LinkDataType*)malloc(sizeof(LinkDataType));
	if (newNode == NULL)
	{
		printf("申请结点失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}


//尾插
void ListPushBack(LNode** pphead, LinkDataType x)
{
	LNode* newNode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//定义尾指针
		LNode* tail = *pphead;

		//找到尾结点
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//将结点接入尾部
		tail->next = newNode;
	}
	

}


//尾删
void ListPopBack(LNode** pphead)
{
	//1.空
	//2.一个结点
	//3.多个结点
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
			//找到尾结点的前面一个结点
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}