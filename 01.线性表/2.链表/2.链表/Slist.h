#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SListDataType;
//结点
typedef struct SlistNode
{
	SListDataType data;
	struct SlistNode* next;
}SlistNode;

//尾插
void SlistPushBack(SlistNode** pphead, SListDataType x);

//尾删
void SlistPopBack(SlistNode** pphead);

//头插
void SlistPushFront(SlistNode* phead, SListDataType x);

//头删
void SlistPopFront(SlistNode* phead);

//打印
void SlistPrint(SlistNode* head);


void SlistSize(SlistNode* head);
