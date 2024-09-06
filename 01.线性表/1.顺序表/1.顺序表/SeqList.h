#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SQDataType;



////静态顺序表（固定大小）
//#define MAX 10
//typedef struct SeqList
//{
//	SQDataType data[MAX];
//	int size;
//}SeqList;




//动态顺序表（大小可变）
typedef struct SeqList
{
	SQDataType* data;
	int size;//有效数据的个数
	int capacity;//容量
}SeqList;




//初始化
void SeqListInit(SeqList* ps);

//打印
void SeqListPrint(SeqList* ps);

//扩容
void SeqListCheckCapacity(SeqList* ps);

//尾插
void SeqListPushBack(SeqList* ps, SQDataType x);

//尾删
void SeqListPopBack(SeqList* ps);

//头插
void SeqListPushFront(SeqList* ps, SQDataType x);

//头删
void SeqListPopFront(SeqList* ps);

//任意位置插入
void SeqListInsert(SeqList* ps, int pos, SQDataType x);

//任意位置删除
void SeqListErase(SeqList* ps, int pos);

//查找元素所在位置
int SeqListFind(SeqList* ps, SQDataType x);
