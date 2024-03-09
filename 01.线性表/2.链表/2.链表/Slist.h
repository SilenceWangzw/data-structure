#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SListDataType;
//���
typedef struct SlistNode
{
	SListDataType data;
	struct SlistNode* next;
}SlistNode;

//β��
void SlistPushBack(SlistNode** pphead, SListDataType x);

//βɾ
void SlistPopBack(SlistNode** pphead);

//ͷ��
void SlistPushFront(SlistNode* phead, SListDataType x);

//ͷɾ
void SlistPopFront(SlistNode* phead);

//��ӡ
void SlistPrint(SlistNode* head);


void SlistSize(SlistNode* head);
