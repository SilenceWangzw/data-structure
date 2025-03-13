#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;//������
	struct SListNode* next;//ָ����
}LinkList, SListNode;


//��ӡ
void SListPrint(LinkList* phead);

//������
SListNode* SListBuyNode(SListDataType x);

//β��
void SListPushBack(LinkList** phead, SListDataType x);

//βɾ
void SListPopBack(LinkList** phead);

//ͷ��
void SListPushFront(LinkList** phead, SListDataType x);

//ͷɾ
void SListPopFront(LinkList** phead);

//����
SListNode* SListFind(LinkList* phead, SListDataType x);

//��pos��ǰ�����x
void SListInsert(LinkList** phead, SListNode* pos, SListDataType x);

//ɾ��posλ�õ�ֵ
void SListErase(LinkList** phead, SListNode* pos);