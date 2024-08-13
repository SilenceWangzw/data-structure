#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>


#define MaxSize 10
typedef int ElemType;
typedef struct SeqList
{
	ElemType* base;
	int size;//Ŀǰ�Ĵ�С
	int capacity;//����
}SeqList;



//��ʼ��
void InitSeqList(SeqList* list);

//��ӡ
void show_list(SeqList* list);

//β��
void push_back(SeqList* list, ElemType x);

//ͷ��
void push_front(SeqList* list, ElemType x);

//βɾ
void pop_back(SeqList* list);

//ͷɾ
void pop_front(SeqList* list);

//��λ�ò��루�����±꣩
void insert_pos(SeqList* list, int pos, ElemType x);

//����
int find(SeqList* list, ElemType x);

//���
int length(SeqList* list);

//��λ��ɾ��Ԫ��(�����±�)
void delete_pos(SeqList* list, int pos);

//��ֵɾ��
void delete_val(SeqList* list, ElemType x);

//����
void sort(SeqList* list);

//����˳���
void reverse(SeqList* list);

//���˳���
void clear(SeqList* list);

//�ݻ�˳���
void destory(SeqList* list);