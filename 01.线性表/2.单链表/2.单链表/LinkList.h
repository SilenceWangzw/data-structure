#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int LinkDataType;
typedef struct LNode
{
	LinkDataType data;//数据域
	struct LNode* next;//指针域
}LNode;



//打印
void ListPrint(LNode* phead);

//申请结点
LNode* BuyListNode(LinkDataType x);

//尾插
void ListPushBack(LNode** pphead, LinkDataType x);

//尾删
void ListPopBack(LNode** pphead);

//头插
void ListPushFront(LNode** pphead, LinkDataType x);

//头删
void ListPopFront(LNode** pphead);
