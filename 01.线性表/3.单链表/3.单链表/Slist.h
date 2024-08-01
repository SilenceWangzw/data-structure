#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;//������
	struct SListNode* next;//ָ����
}SListNode;


//β��
void SListPushBack(SListNode** phead, SListDataType x);

//βɾ
void SListPopBack(SListNode** phead);

//ͷ��
void SListPushFront(SListNode** phead, SListDataType x);

//ͷɾ
void SListPopFront(SListNode** phead);

//��ӡ
void SListPrint(SListNode* phead);

//������
SListNode* BuySListNode(SListDataType x);
