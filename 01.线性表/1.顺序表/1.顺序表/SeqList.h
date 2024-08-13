#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>


#define MaxSize 10
typedef int ElemType;
typedef struct SeqList
{
	ElemType* base;
	int size;//目前的大小
	int capacity;//容量
}SeqList;



//初始化
void InitSeqList(SeqList* list);

//打印
void show_list(SeqList* list);

//尾插
void push_back(SeqList* list, ElemType x);

//头插
void push_front(SeqList* list, ElemType x);

//尾删
void pop_back(SeqList* list);

//头删
void pop_front(SeqList* list);

//按位置插入（数组下标）
void insert_pos(SeqList* list, int pos, ElemType x);

//查找
int find(SeqList* list, ElemType x);

//求表长
int length(SeqList* list);

//按位置删除元素(数组下标)
void delete_pos(SeqList* list, int pos);

//按值删除
void delete_val(SeqList* list, ElemType x);

//排序
void sort(SeqList* list);

//逆置顺序表
void reverse(SeqList* list);

//清除顺序表
void clear(SeqList* list);

//摧毁顺序表
void destory(SeqList* list);