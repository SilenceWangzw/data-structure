#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//˳����ʼ��
void SeqListInit(SeqList* sl)
{
	memset(sl->a, 0, MAX * sizeof(SLDataType));
	sl->size = 0;
}


//β��
void SeqListPushBack(SeqList* sl, SLDataType x)
{
	if (sl->size >= MAX)
	{
		printf("SeqList is Full\n");
		return;
	}
	sl->a[sl->size] = x;
	sl->size++;

}