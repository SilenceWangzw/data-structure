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


//头插
void SListPushFront(LinkList** phead, SListDataType x)
{
	//申请结点
	SListNode* NewNode = SListBuyNode(x);

	NewNode->next = *phead;
	*phead = NewNode;
}


//头删
void SListPopFront(LinkList** phead)
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
		SListNode* cur = *phead;//保存第一个结点
		*phead = (*phead)->next;
		free(cur);
		cur = NULL;
	}
}


//查找
SListNode* SListFind(LinkList* phead, SListDataType x)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
}


//在pos的前面插入x
void SListInsert(LinkList** phead, SListNode* pos, SListDataType x)
{
	//申请结点
	SListNode* NewNode = SListBuyNode(x);

	//如果pos是第一个结点
	if (pos == *phead)
	{
		SListPushFront(phead, x);
	}
	else
	{

		//找到pos的前一个结点
		SListNode* prev = *phead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		//插入数据
		NewNode->next = prev->next;
		prev->next = NewNode;
	}
}


//删除pos位置的值
void SListErase(LinkList** phead, SListNode* pos)
{
	if (*phead == pos)
	{
		SListPopFront(phead);
	}
	else
	{
		SListNode* prev = *phead;
		//找到pos的前一个位置
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
	}
}
