#define _CRT_SECURE_NO_WARNINGS
#include"DuLinkList.h"

//申请结点
DLNode* BuyListNode(DLTDataType x)
{
	DLNode* NewNode = (DLNode*)malloc(sizeof(DLNode));
	NewNode->data = x;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	return NewNode;
}


//初始化
DLNode* ListInit()
{
	DLNode* NewNode = BuyListNode(0);
	NewNode->next = NewNode;
	NewNode->prev = NewNode;
	return NewNode;
}


//打印
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


//尾插
void ListPushBack(DLinkList* phead, DLTDataType x)
{
	assert(phead);
	//找到尾结点
	DLNode* tail = phead->prev;
	//申请结点
	DLNode* NewNode = BuyListNode(x);

	//插入数据
	tail->next = NewNode;
	NewNode->prev = tail;
	NewNode->next = phead;
	phead->prev = NewNode;

}


//尾删
void ListPopBack(DLinkList* phead)
{
	assert(phead);
	assert(phead->next != phead);
	//找到尾结点
	DLNode* tail = phead->prev;

	tail->prev->next = phead;
	phead->prev = tail->prev;
	free(tail);
	tail = NULL;
}


//头插
void ListPushFront(DLinkList* phead, DLTDataType x)
{
	assert(phead);
	//申请结点
	DLNode* NewNode = BuyListNode(x);
	//找到第一个结点
	DLNode* first = phead->next;
	//插入数据
	phead->next = NewNode;
	NewNode->prev = phead;
	NewNode->next = first;
	first->prev = NewNode;
}


//头删
void ListPopFront(DLinkList* phead)
{
	assert(phead);
	assert(phead->next != phead);
	//找到第一个结点
	DLNode* first = phead->next;
	phead->next = first->next;
	first->next->prev = phead;
	free(first);
	first = NULL;
}


//查找
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


//在pos位置之前插入
void ListInsert(DLNode* pos, DLTDataType x)
{
	//申请结点
	DLNode* NewNode = BuyListNode(x);

	//找到pos前面的结点
	DLNode* prev = pos->prev;
	prev->next = NewNode;
	NewNode->prev = prev;
	NewNode->next = pos;
	pos->prev = NewNode;

}


//删除pos位置的值
void ListErase(DLNode* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	pos = NULL;
}


//销毁
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