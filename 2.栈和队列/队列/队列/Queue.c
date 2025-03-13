#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"


//初始化
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}


//销毁
void QueueDestory(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->head;
	while (cur != NULL)
	{
		QueueNode* curnext = cur->next;
		free(cur);
		cur = curnext;
	}
	pq->head = pq->tail = NULL;
}


//入队
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	//申请结点
	QueueNode* NewNode = (QueueNode*)malloc(sizeof(QueueNode));
	NewNode->data = x;
	NewNode->next = NULL;
	if (NewNode == NULL)
	{
		printf("申请结点失败\n");
		exit(-1);
	}
	//队列为空
	if (pq->tail == NULL)
	{
		pq->head = NewNode;
		pq->tail = NewNode;
	}
	//队列不为空
	else
	{
		pq->tail->next = NewNode;
		pq->tail = NewNode;
	}
}


//出队
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);

	//只有一个结点
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;

	}
	//多个结点
	else
	{
		//保存第一个结点的下一个结点
		QueueNode* headnext = pq->head->next;
		//释放队头结点
		free(pq->head);
		pq->head = headnext;
	}
}


//取队头数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);
	return pq->head->data;
}


//取队尾数据
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);
	return pq->tail->data;
}


//求队列长度
int QueueSize(Queue* pq)
{
	assert(pq);
	int size = 0;
	QueueNode* cur = pq->head;
	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}
	return size;
}


//判空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}