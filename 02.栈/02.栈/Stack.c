#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

//��ʼ��
void StackInit(Stack* ps)
{
	assert(ps);

	ps->data = (STDataType*)malloc(sizeof(STDataType) * 4);
	ps->capacity = 4;
	ps->top = 0;//ָ��ջ��Ԫ�ص���һ��λ��
	//ps->top = -1;//ָ��ջ��Ԫ��
}


//ջ����
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->data);
	ps->data == NULL;
	ps->top = 0;
	ps->capacity = 0;
}


//��ջ
void StackPush(Stack* ps, STDataType x)
{
	assert(ps);

	//���ˣ�Ҫ����
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


//��ջ
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->top > 0);
	//���ջ���ˣ�����popֱ����ֹ����
	ps->top--;
}


//��ȡջ��Ԫ��
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->data[ps->top - 1];
}


//��Ԫ�ظ���
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}


//�п�
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}