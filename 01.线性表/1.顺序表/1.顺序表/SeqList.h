#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//顺序表，有效数据在数组中必须是连续的
//静态顺序表设计（固定大小）
//typedef int SLDataType;
//#define N 10
//struct SeqList 
//{
//	SLDataType a[N];
//	int size;
//};
//
////函数声明
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPopBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps);




//动态顺序表设计（大小可变）
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a; //指向动态开辟的数组
	int size; //有效数据的个数
	int capacity; //容量
}SL, SeqList;


//初始化
void SeqListInit(SL *s);
//打印
void SeqListPrint(SL* ps);
//检查扩容
void SeqListCheckCapacity(SL* ps);
//尾插尾删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);

//头插头删
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//任意位置插入删除
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);