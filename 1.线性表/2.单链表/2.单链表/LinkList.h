#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int ListDataType;
typedef struct LNode
{
	ListDataType data;//������
	struct LNode* next;//ָ����
}LNode, LinkList;


//��ӡ����
void ListPrint(LinkList* phead);

//������
LNode* BuyListNode(ListDataType x);

//β��
void ListPushBack(LinkList** pphead, ListDataType x);

//βɾ
void ListPopBack(LinkList** pphead);

//ͷ��
void ListPushFront(LinkList** pphead, ListDataType x);

//ͷɾ
void ListPopFront(LinkList** pphead);

//����Ԫ��
LNode* ListFind(LinkList* pphead, ListDataType x);