#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//1.��̬˳���
//ȱ�ݣ�
//�ٸ����˲�����
//�ڸ������ò��꣬�˷ѣ�����������
#define MAX 10
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType a[MAX];
	int size;
}SeqList;


//˳����ʼ��
void SeqListInit(SeqList* sl);

//β��
void SeqListPushBack(SeqList* sl, SLDataType x);