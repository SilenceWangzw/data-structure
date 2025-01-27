#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

//初始化
void StackInit(Stack* pst)
{
	pst->data = (STDataType*)malloc(sizeof(STDataType) * 4);
	pst->top = 0;
	pst->capacity = 4;
}


//销毁
void StackDestory(Stack* pst)
{
	assert(pst != NULL);
	free(pst->data);
	pst->data = NULL;
	pst->top = 0;
	pst->capacity = 0;
}


//入栈
void StackPush(Stack* pst, STDataType x)
{
	assert(pst != NULL);
	if (pst->top == pst->capacity)
	{
		pst->capacity *= 2;
		STDataType* tmp = (STDataType*)realloc(pst->data, sizeof(STDataType) * pst->capacity);
		if (tmp == NULL)
		{
			printf("内存不足\n");
			exit(-1);
		}
		else
		{
			pst->data = tmp;
		}
	}
	pst->data[pst->top] = x;
	pst->top++;
}


//出栈
void StackPop(Stack* pst)
{
	assert(pst != NULL);
	assert(pst->top > 0);
	pst->top--;
}


//求长度
int StackSize(Stack* pst)
{
	assert(pst != NULL);
	return pst->top;
}


//判空
int StackEmpty(Stack* pst)
{
	assert(pst != NULL);
	return pst->top == 0 ? 1 : 0;
}


//获取栈顶元素
STDataType StackTop(Stack* pst)
{
	assert(pst != NULL);
	assert(pst->top > 0);
	return pst->data[pst->top - 1];
}