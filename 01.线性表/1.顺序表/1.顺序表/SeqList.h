#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//��̬˳���
//�ص㣺������ˣ��Ͳ��ò���
//ȱ�㣺�����ٵĿռ�����أ��������ȷ������С�˲����ã��������˷�
//#define N 10
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType data[N];
//	int size;
//}SL;


//��̬˳���
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* data;//ָ��̬���ٵ�����
	int size;//��Ч���ݵĸ���
	int capacity;//�����ռ��С
}SL;



//˳����ʼ��
void SeqListInit(SL* ps);

//����
void SeqListCheckCapacity(SL* ps);

//��ӡ
void SeqListPrint(SL* ps);

//β��
void SeqListPushBack(SL* ps, SLDataType x);

//βɾ
void SeqListPopBack(SL* ps);

//ͷ��
void SeqListPushFront(SL* ps, SLDataType x);

//ͷɾ
void SeqListPopFront(SL* ps);

//����
int SeqListFind(SL* ps, SLDataType x);

//ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x);

//ָ��pos�±�λ��ɾ��
void SeqListErase(SL* ps, int pos);