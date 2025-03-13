#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"


//��ʼ��
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}


//����
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


//���
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	//������
	QueueNode* NewNode = (QueueNode*)malloc(sizeof(QueueNode));
	NewNode->data = x;
	NewNode->next = NULL;
	if (NewNode == NULL)
	{
		printf("������ʧ��\n");
		exit(-1);
	}
	//����Ϊ��
	if (pq->tail == NULL)
	{
		pq->head = NewNode;
		pq->tail = NewNode;
	}
	//���в�Ϊ��
	else
	{
		pq->tail->next = NewNode;
		pq->tail = NewNode;
	}
}


//����
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);

	//ֻ��һ�����
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;

	}
	//������
	else
	{
		//�����һ��������һ�����
		QueueNode* headnext = pq->head->next;
		//�ͷŶ�ͷ���
		free(pq->head);
		pq->head = headnext;
	}
}


//ȡ��ͷ����
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);
	return pq->head->data;
}


//ȡ��β����
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);
	return pq->tail->data;
}


//����г���
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


//�п�
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}