#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//˳�����Ч�����������б�����������
//��̬˳�����ƣ��̶���С��
//typedef int SLDataType;
//#define N 10
//struct SeqList 
//{
//	SLDataType a[N];
//	int size;
//};
//
////��������
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPopBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps);




//��̬˳�����ƣ���С�ɱ䣩
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a; //ָ��̬���ٵ�����
	int size; //��Ч���ݵĸ���
	int capacity; //����
}SL, SeqList;


//��ʼ��
void SeqListInit(SL *s);
//��ӡ
void SeqListPrint(SL* ps);
//�������
void SeqListCheckCapacity(SL* ps);
//β��βɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);

//ͷ��ͷɾ
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//����λ�ò���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);