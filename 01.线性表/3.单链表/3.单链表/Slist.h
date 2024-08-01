#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;//数据域
	struct SListNode* next;//指针域
}SListNode;


//尾插
void SListPushBack(SListNode** phead, SListDataType x);

//尾删
void SListPopBack(SListNode** phead);

//头插
void SListPushFront(SListNode** phead, SListDataType x);

//头删
void SListPopFront(SListNode** phead);

//打印
void SListPrint(SListNode* phead);

//申请结点
SListNode* BuySListNode(SListDataType x);
