#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;//数据域
	struct SListNode* next;//指针域
}LinkList, SListNode;


//打印
void SListPrint(LinkList* phead);

//申请结点
SListNode* SListBuyNode(SListDataType x);

//尾插
void SListPushBack(LinkList** phead, SListDataType x);

//尾删
void SListPopBack(LinkList** phead);

//头插
void SListPushFront(LinkList** phead, SListDataType x);

//头删
void SListPopFront(LinkList** phead);


