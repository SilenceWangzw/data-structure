#define _CRT_SECURE_NO_WARNINGS 1
#include"DuLinkList.h"

//申请结点
struct DuLNode* BuyNode(ElemType x)
{
	DuLNode* newnode = (DuLNode*)malloc(sizeof(ElemType));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}


//初始化
void ListInit(DuLinkList** phead)
{
	*phead = BuyNode(0);//申请头结点
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}