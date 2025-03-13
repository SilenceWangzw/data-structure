#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

int main()
{
	Queue q;

	//初始化
	QueueInit(&q);


	//入队
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");

	//销毁
	QueueDestory(&q);

	return 0;
}