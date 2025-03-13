#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;
//动态顺序表（大小可变）
typedef struct SeqList
{
	SLDataType* data;//指向数组的指针
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
void SeqListPushBack(SeqList* ps, SLDataType x);

//尾删
void SeqListPopBack(SeqList* ps);

//头插
void SeqListPushFront(SeqList* ps, SLDataType x);

//头删
void SeqListPopFront(SeqList* ps);

//任意位置插入(下标)
void SeqListInsert(SeqList* ps, int pos, SLDataType x);

//任意位置删除(下标)
void SeqListErase(SeqList* ps, int pos);

//查找元素，返回下标
int SeqListFind(SeqList* ps, SLDataType x);
