#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* data;
	int top;//栈顶
	int capacity;
}Stack;

//初始化
void StackInit(Stack* pst);

//销毁
void StackDestory(Stack* pst);

//入栈
void StackPush(Stack* pst, STDataType x);

//出栈
void StackPop(Stack* pst);

//求长度
int StackSize(Stack* pst);

//判空
int StackEmpty(Stack* pst);

//获取栈顶元素
STDataType StackTop(Stack* pst);

