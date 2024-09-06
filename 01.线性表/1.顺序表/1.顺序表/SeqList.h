#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SQDataType;



////��̬˳����̶���С��
//#define MAX 10
//typedef struct SeqList
//{
//	SQDataType data[MAX];
//	int size;
//}SeqList;




//��̬˳�����С�ɱ䣩
typedef struct SeqList
{
	SQDataType* data;
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
void SeqListPushBack(SeqList* ps, SQDataType x);

//βɾ
void SeqListPopBack(SeqList* ps);

//ͷ��
void SeqListPushFront(SeqList* ps, SQDataType x);

//ͷɾ
void SeqListPopFront(SeqList* ps);

//����λ�ò���
void SeqListInsert(SeqList* ps, int pos, SQDataType x);

//����λ��ɾ��
void SeqListErase(SeqList* ps, int pos);

//����Ԫ������λ��
int SeqListFind(SeqList* ps, SQDataType x);
