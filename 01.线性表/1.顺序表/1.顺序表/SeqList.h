#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//��̬˳���
//�ص㣺������ˣ��Ͳ��ò���
//ȱ�㣺�����ٵĿռ�����أ��������ȷ������С�˲����ã��������˷�
//#define N 100
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType data[N];
//	int size;//��ʾ�����д洢�˶��ٸ�����
//}SL;


//��̬˳���
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* data;//ָ��̬���ٵ�����
	int size;//��Ч���ݸ���
	int capacity;//�����ռ�Ĵ�С
}SL;



//��ʼ��
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

//����Ԫ�ز������±�
int SeqListFind(SL* ps, SLDataType x);

//����ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x);

//����ָ��pos�±�λ��ɾ��
void SeqListErase(SL* ps, int pos);

//����
void SeqListDestory(SL* ps);