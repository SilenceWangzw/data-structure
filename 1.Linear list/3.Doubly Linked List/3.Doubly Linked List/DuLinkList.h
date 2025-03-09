#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//��ͷ˫��ѭ������ -- ��������ṹ
//����λ�ò���ɾ�����ݶ���O(1)

typedef int DLTDataType;
typedef struct DLNode
{
	DLTDataType data;//������
	struct DLNode* next;//ָ����һ�����
	struct DLNode* prev;//ָ��ǰһ�����
}DLNode, DuLinkList;


//��ʼ��
DLNode* ListInit();

//����
void ListDestory(DuLinkList* phead);

//������
DLNode* BuyListNode(DLTDataType x);

//��ӡ
void ListPrint(DuLinkList* phead);

//β��
void ListPushBack(DuLinkList* phead, DLTDataType x);

//βɾ
void ListPopBack(DuLinkList* phead);

//ͷ��
void ListPushFront(DuLinkList* phead, DLTDataType x);

//ͷɾ
void ListPopFront(DuLinkList* phead);

//����
DLNode* ListFind(DuLinkList* phead, DLTDataType x);

//��posλ��֮ǰ����
void ListInsert(DLNode* pos, DLTDataType x);

//ɾ��posλ�õ�ֵ
void ListErase(DLNode* pos);