#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//动态顺序表设计（可调整大小）
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;//指向动态开辟的数组
	int size;//有效数据个数
	int capacity;//容量

}SL, SeqList;


//顺序表初始化
void SeqListInit(SL* ps);

//扩容
void SeqListCheckCapacity(SL* ps);

//打印顺序表
void SeqListPrint(SL* ps);

//尾插
void SeqListPushBack(SL* ps, SLDataType x);

//尾删
void SeqListPopBack(SL* ps);

//头插
void SeqListPushFront(SL* ps, SLDataType x);

//头删
void SeqListPopFront(SL* ps);

//任意位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x);

//任意位置删除
void SeqListErase(SL* ps, int pos);

//顺序表查找
int SeqListFind(SL* ps, SLDataType x);
