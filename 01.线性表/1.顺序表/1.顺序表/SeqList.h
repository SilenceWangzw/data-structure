#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//静态顺序表
//特点：如果满了，就不让插入
//缺点：给多少的空间合适呢？这个很难确定，给小了不够用，给大了浪费
//#define N 100
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType data[N];
//	int size;//表示数组中存储了多少个数据
//}SL;


//动态顺序表
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* data;//指向动态开辟的数组
	int size;//有效数据个数
	int capacity;//容量空间的大小
}SL;



//初始化
void SeqListInit(SL* ps);

//扩容
void SeqListCheckCapacity(SL* ps);

//打印
void SeqListPrint(SL* ps);

//尾插
void SeqListPushBack(SL* ps, SLDataType x);

//尾删
void SeqListPopBack(SL* ps);

//头插
void SeqListPushFront(SL* ps, SLDataType x);

//头删
void SeqListPopFront(SL* ps);

//查找元素并返回下标
int SeqListFind(SL* ps, SLDataType x);

//任意指定pos下标位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x);

//任意指定pos下标位置删除
void SeqListErase(SL* ps, int pos);

//销毁
void SeqListDestory(SL* ps);