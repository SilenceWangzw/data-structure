#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* data;
	int top;//ջ��
	int capacity;
}Stack;

//��ʼ��
void StackInit(Stack* pst);

//����
void StackDestory(Stack* pst);

//��ջ
void StackPush(Stack* pst, STDataType x);

//��ջ
void StackPop(Stack* pst);

//�󳤶�
int StackSize(Stack* pst);

//�п�
int StackEmpty(Stack* pst);

//��ȡջ��Ԫ��
STDataType StackTop(Stack* pst);

