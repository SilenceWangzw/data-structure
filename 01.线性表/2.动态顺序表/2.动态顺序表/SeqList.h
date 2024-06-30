#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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


