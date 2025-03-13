#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;
typedef struct QueueNode
{
	QDataType* data;
	struct Queue* next;
}QueueNode;


typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;


//��ʼ��
void QueueInit(Queue* pq);

//����
void QueueDestory(Queue* pq);

//���
void QueuePush(Queue* pq, QDataType x);

//����
void QueuePop(Queue* pq);

//ȡ��ͷ����
QDataType QueueFront(Queue* pq);

//ȡ��β����
QDataType QueueBack(Queue* pq);

//����г���
int QueueSize(Queue* pq);

//�п�
bool QueueEmpty(Queue* pq);
