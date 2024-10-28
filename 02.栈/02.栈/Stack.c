#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

//初始化
void StackInit(Stack* ps)
{
	assert(ps);

	ps->data = (STDataType*)malloc(sizeof(STDataType) * 4);
	ps->capacity = 4;
	ps->top = 0;//指向栈顶元素的下一个位置
	//ps->top = -1;//指向栈顶元素
}


//栈销毁
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->data);
	ps->data == NULL;
	ps->top = 0;
	ps->capacity = 0;
}


//入栈
void StackPush(Stack* ps, STDataType x)
{
	assert(ps);

	//满了，要扩容
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
	//如果栈空了，调用pop直接终止程序
	ps->top--;
}


//获取栈顶元素
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->data[ps->top - 1];
}


//求元素个数
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}


//判空
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}