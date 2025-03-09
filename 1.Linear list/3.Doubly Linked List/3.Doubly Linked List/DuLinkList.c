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


//销毁
void ListDestory(DuLinkList* phead)
{
	assert(phead);
	//保存第一个结点
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		//保存第二个结点
		DLNode* curnext = cur->next;

		free(cur);
		cur = curnext;
	}

	free(phead);
	phead = NULL;
}


//初始化
DLNode* ListInit()
{
	//申请头结点
	DLNode* NewNode = BuyListNode(0);
	NewNode->next = NewNode;
	NewNode->prev = NewNode;
	return NewNode;
}


//打印
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


//尾插
void ListPushBack(DuLinkList* phead, DLTDataType x)
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
void ListPopBack(DuLinkList* phead)
{
	//找到尾结点
	DLNode* tail = phead->prev;

	//记录尾结点的前一个结点
	DLNode* tailprev = tail->prev;

	//删除数据
	tailprev->next = tail->next;
	phead->prev = tailprev;

	//释放结点
	free(tail);
	tail = NULL;
}


//头插
void ListPushFront(DuLinkList* phead, DLTDataType x)
{
	assert(phead);
	//找到第一个结点
	DLNode* first = phead->next;

	//申请结点
	DLNode* NewNode = BuyListNode(x);

	//插入数据
	NewNode->next = first;
	first->prev = NewNode;
	NewNode->prev = phead;
	phead->next = NewNode;
}


//头删
void ListPopFront(DuLinkList* phead)
{
	//找到第一个结点
	DLNode* first = phead->next;

	//删除数据
	phead->next = first->next;
	first->next->prev = phead;

	//释放结点
	free(first);
	first = NULL;
}

//查找
DLNode* ListFind(DuLinkList* phead, DLTDataType x)
{
	assert(phead);
	DLNode* cur = phead->next;
	//遍历链表
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


//在pos位置之前插入
void ListInsert(DLNode* pos, DLTDataType x)
{
	//找到pos的前一个结点
	DLNode* posprev = pos->prev;

	//申请结点
	DLNode* NewNode = BuyListNode(x);

	//插入数据
	posprev->next = NewNode;
	NewNode->prev = posprev;
	NewNode->next = pos;
	pos->prev = NewNode;
}


//删除pos位置的值
void ListErase(DLNode* pos)
{
	//找到pos的前一个结点
	DLNode* posprev = pos->prev;

	//删除元素
	posprev->next = pos->next;
	pos->next->prev = posprev;

	//释放结点
	free(pos);
	pos = NULL;
}