#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//��̬˳�����ƣ��ɵ�����С��
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;//ָ��̬���ٵ�����
	int size;//��Ч���ݸ���
	int capacity;//����

}SL, SeqList;


//˳����ʼ��
void SeqListInit(SL* ps);

//����
void SeqListCheckCapacity(SL* ps);

//��ӡ˳���
void SeqListPrint(SL* ps);

//β��
void SeqListPushBack(SL* ps, SLDataType x);

//βɾ
void SeqListPopBack(SL* ps);

//ͷ��
void SeqListPushFront(SL* ps, SLDataType x);

//ͷɾ
void SeqListPopFront(SL* ps);

//����λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x);

//����λ��ɾ��
void SeqListErase(SL* ps, int pos);

//˳������
int SeqListFind(SL* ps, SLDataType x);
