#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"

//打印
void SlistPrint(SlistNode* phead)
{
	//不需要assert，因为有可能是空链表
	SlistNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//申请结点
SlistNode* BuySlistNode(SListDataType x)
{
	SlistNode* newNode = (SlistNode*)malloc(sizeof(SListDataType) * 1);
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
void SlistPushBack(SlistNode** pphead, SListDataType x)
{
	SlistNode* newNode = BuySlistNode(x);

	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SlistNode* tail = *pphead;
		while (tail->next != NULL)//找尾部
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
	newNode->data = x;
	newNode->next = NULL;
	

}

//尾删
void SlistPopBack(SlistNode** pphead)
{
	//1.空
	//2.一个结点
	//3.一个以上结点
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
		SlistNode* prev = NULL; //保存tail的前一个结点
		SlistNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
	

	
}