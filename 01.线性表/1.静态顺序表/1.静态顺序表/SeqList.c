#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//Ë³Ðò±í³õÊ¼»¯
void SeqListInit(SeqList* sl)
{
	memset(sl->a, 0, MAX * sizeof(SLDataType));
	sl->size = 0;
}


//Î²²å
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