#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//2.��̬˳���
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* data;//ָ��̬���ٵ�����
	int size;//��Ч���ݸ���
	int capacity;//�����ռ�Ĵ�С
}SeqList;


//˳����ʼ��
void SeqListInit(SeqList* ps);

//�������
void SeqListCheckCapacity(SeqList* ps);

//��ӡ
void SeqListPrint(SeqList* ps);

//β��
void SeqListPushBack(SeqList* ps, SLDataType x);

//ͷ��
void SeListPushFront(SeqList* ps, SLDataType x);


