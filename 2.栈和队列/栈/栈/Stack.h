#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDataType;
//动态数组形式的栈
typedef struct Stack
{
	STDataType* data;
	int top;//栈顶
	int capacity;//容量
}Stack;

//初始化
void StackInit(Stack* ps);

//销毁
void StackDestory(Stack* ps);

//入栈
void StackPush(Stack* ps, STDataType x);

//出栈
void StackPop(Stack* ps);

//求栈的大小
int StackSize(Stack* ps);

//取栈顶数据
STDataType StackTop(Stack* ps);

//判空
int StackEmpty(Stack* ps);