#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDataType;
//��̬������ʽ��ջ
typedef struct Stack
{
	STDataType* data;
	int top;//ջ��
	int capacity;//����
}Stack;

//��ʼ��
void StackInit(Stack* ps);

//����
void StackDestory(Stack* ps);

//��ջ
void StackPush(Stack* ps, STDataType x);

//��ջ
void StackPop(Stack* ps);

//��ջ�Ĵ�С
int StackSize(Stack* ps);

//ȡջ������
STDataType StackTop(Stack* ps);

//�п�
int StackEmpty(Stack* ps);