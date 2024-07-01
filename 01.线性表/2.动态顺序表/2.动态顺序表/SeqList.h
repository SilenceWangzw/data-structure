#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//2.动态顺序表
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* data;//指向动态开辟的数组
	int size;//有效数据个数
	int capacity;//容量空间的大小
}SeqList;


//顺序表初始化
void SeqListInit(SeqList* ps);

//检查容量
void SeqListCheckCapacity(SeqList* ps);

//打印
void SeqListPrint(SeqList* ps);

//尾插
void SeqListPushBack(SeqList* ps, SLDataType x);

//头插
void SeListPushFront(SeqList* ps, SLDataType x);

//尾删
void SeqListPopBack(SeqList* ps);

//头删
void SeqListPopFront(SeqList* ps);

//指定pos位置插入
void SeqListInsert(SeqList* ps,int pos,SLDataType x);

//指定pos位置删除
void SeqListDelete(SeqList* ps, int pos);

//查找
int SeqListFind(SeqList* ps, SLDataType x);

//修改
int SeqListModify(SeqList* ps, int pos, SLDataType x);

//销毁
void SeqListDestory(SeqList* ps);