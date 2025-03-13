#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//��ͷ˫��ѭ������ -- ��������ṹ
//����λ�ò���ɾ�����ݶ���O(1)

typedef int DLTDataType;
//���
typedef struct DLNode
{
	DLTDataType data;//������
	struct DLNode* next;//ָ����һ�����
	struct DLNode* prev;//ָ��ǰһ�����
}DLNode, DLinkList;

//��ʼ��
DLNode* ListInit();

//����
void ListDestory(DLinkList* phead);

//������
DLNode* BuyListNode(DLTDataType x);

//��ӡ
void ListPrint(DLinkList* phead);

//β��
void ListPushBack(DLinkList* phead, DLTDataType x);

//βɾ
void ListPopBack(DLinkList* phead);

//ͷ��
void ListPushFront(DLinkList* phead, DLTDataType x);

//ͷɾ
void ListPopFront(DLinkList* phead);

//����
DLNode* ListFind(DLinkList* phead, DLTDataType x);

//��posλ��֮ǰ����
void ListInsert(DLNode* pos, DLTDataType x);

//ɾ��posλ�õ�ֵ
void ListErase(DLNode* pos);
