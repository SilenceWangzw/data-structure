#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

int main()
{
	Stack st;
	//��ʼ��
	StackInit(&st);

	//��ջ
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);

	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}


	//����
	StackDestory(&st);

	return 0;
}