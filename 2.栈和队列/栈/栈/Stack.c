#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

//初始化
void StackInit(Stack* ps)
{
	assert(ps);
	ps->data = (STDataType*)malloc(sizeof(STDataType) * 4);
	ps->top = 0;//初始给0，意味着top指向的是栈顶元素的下一个
	ps->capacity = 4;
}


//销毁
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->data);
	ps->data = NULL;
	ps->top = 0;
	ps->capacity = 0;
}


//入栈
void StackPush(Stack* ps, STDataType x)
{
	assert(ps);
	//满了要扩容
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->data, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->data = tmp;
			ps->capacity *= 2;
		}
	}

	ps->data[ps->top] = x;
	ps->top++;
}


//出栈
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}


//求栈的大小
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}


//取栈顶数据
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->data[ps->top - 1];
}


//判空
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}