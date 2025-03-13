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


//初始化
void QueueInit(Queue* pq);

//销毁
void QueueDestory(Queue* pq);

//入队
void QueuePush(Queue* pq, QDataType x);

//出队
void QueuePop(Queue* pq);

//取队头数据
QDataType QueueFront(Queue* pq);

//取队尾数据
QDataType QueueBack(Queue* pq);

//求队列长度
int QueueSize(Queue* pq);

//判空
bool QueueEmpty(Queue* pq);
