#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* data;
	int top;//栈顶
	int capacity;//容量
}Stack;


//初始化
void StackInit(Stack* ps);

//栈销毁
void StackDestory(Stack* ps);

//入栈
void StackPush(Stack* ps, STDataType x);

//出栈
void StackPop(Stack* ps);

//获取栈顶元素
STDataType StackTop(Stack* ps);

//求元素个数
int StackSize(Stack* ps);

//判空
bool StackEmpty(Stack* ps);