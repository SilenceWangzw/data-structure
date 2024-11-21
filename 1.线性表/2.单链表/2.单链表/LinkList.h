#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int ElemType;
typedef struct LNode
{
	ElemType data;//������
	struct LNode* next;//ָ����
}LNode, LinkList;



//������
LNode* BuyNode(ElemType x);

//��ӡ����
void SlistPrint(LinkList* phead);

//β��
void SlistPushBack(LinkList** phead, ElemType x);

//ͷ��
void SlistPushFront(LinkList** phead, ElemType x);

//ͷɾ
void SlistPopFront(LinkList** phead);

//βɾ
void SlistPopBack(LinkList** phead);

//����
LNode* SlistFind(LinkList* phead, ElemType x);

//��posǰ��λ�ò���
void SlistInsert(LinkList** phead, LNode* pos, ElemType x);

//��posλ��ɾ��
void SlistErase(LinkList** phead, LNode* pos);
