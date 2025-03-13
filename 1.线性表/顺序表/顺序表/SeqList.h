#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;
//��̬˳�����С�ɱ䣩
typedef struct SeqList
{
	SLDataType* data;//ָ�������ָ��
	int size;//��Ч���ݵĸ���
	int capacity;//����
}SeqList;


//��ʼ��
void SeqListInit(SeqList* ps);

//��ӡ
void SeqListPrint(SeqList* ps);

//����
void SeqListCheckCapacity(SeqList* ps);

//β��
void SeqListPushBack(SeqList* ps, SLDataType x);

//βɾ
void SeqListPopBack(SeqList* ps);

//ͷ��
void SeqListPushFront(SeqList* ps, SLDataType x);

//ͷɾ
void SeqListPopFront(SeqList* ps);

//����λ�ò���(�±�)
void SeqListInsert(SeqList* ps, int pos, SLDataType x);

//����λ��ɾ��(�±�)
void SeqListErase(SeqList* ps, int pos);

//����Ԫ�أ������±�
int SeqListFind(SeqList* ps, SLDataType x);
