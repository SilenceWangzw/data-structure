#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//1.静态顺序表
//缺陷：
//①给少了不够用
//②给多了用不完，浪费，不能灵活控制
#define MAX 10
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType a[MAX];
	int size;
}SeqList;


//顺序表初始化
void SeqListInit(SeqList* sl);

//尾插
void SeqListPushBack(SeqList* sl, SLDataType x);