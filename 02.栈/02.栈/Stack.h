#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* data;
	int top;//ջ��
	int capacity;//����
}Stack;


//��ʼ��
void StackInit(Stack* ps);

//ջ����
void StackDestory(Stack* ps);

//��ջ
void StackPush(Stack* ps, STDataType x);

//��ջ
void StackPop(Stack* ps);

//��ȡջ��Ԫ��
STDataType StackTop(Stack* ps);

//��Ԫ�ظ���
int StackSize(Stack* ps);

//�п�
bool StackEmpty(Stack* ps);