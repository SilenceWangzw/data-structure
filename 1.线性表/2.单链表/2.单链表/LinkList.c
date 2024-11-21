#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


//申请结点
LNode* BuyNode(ElemType x)
{
	LNode* newnode = (LNode*)malloc(sizeof(ElemType));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


//打印链表
void SlistPrint(LinkList* phead)
{
	LNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


//尾插
void SlistPushBack(LinkList** phead, ElemType x)
{
	//申请结点
	LNode* newnode = BuyNode(x);

	//表为空
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		LNode* tail = *phead;
		//找尾结点
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//将元素插入尾部
		tail->next = newnode;
	}
}


//头插
void SlistPushFront(LinkList** phead, ElemType x)
{
	//申请结点
	LNode* newnode = BuyNode(x);

	newnode->next = *phead;
	*phead = newnode;
}


//头删
void SlistPopFront(LinkList** phead)
{
	LNode* next = (*phead)->next;//保存下一个结点的地址
	free(*phead);//释放第一个结点
	*phead = next;
}


//尾删
void SlistPopBack(LinkList** phead)
{
	//1.如果链表为空
	if (*phead == NULL)
	{
		return;
	}
	//2.只有一个结点
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	//3.多个结点
	else
	{
		LNode* tail = *phead;
		LNode* prev = *phead;
		while (tail->next != NULL)
		{
			prev = tail;//保存尾结点的前一个结点地址
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;//将前一个结点的指针域置为空
	}
}


//查找
LNode* SlistFind(LinkList* phead, ElemType x)
{
	LNode* cur = phead;
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


//在pos结点前面插入
void SlistInsert(LinkList** phead, LNode* pos, ElemType x)
{
	if (pos == *phead)
	{
		SlistPushFront(phead, x);
	}
	else
	{
		LNode* prev = *phead;
		//找到插入位置的前一个结点
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		LNode* newnode = BuyNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}


//在pos位置删除
void SlistErase(LinkList** phead, LNode* pos)
{
	if (pos == *phead)
	{
		SlistPopFront(phead);
	}
	else
	{
		LNode* prev = *phead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
	}
}
