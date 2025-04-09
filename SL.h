#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
#include <stdlib.h>
typedef int SLDataType;
typedef struct SequenceList {
	SLDataType* arr;
	int capacity;
	int size;
}SL;
//头文件  函数声明
//初始化顺序表
void SLInit(SL* ps);

//删除顺序表
void SLDestroy(SL* ps);

//打印顺序表
void SLPrint(SL* ps);

/**
	增删改查
*/
// 尾插
void SLPushBack(SL* ps, SLDataType n);

// 尾删
void SLPopBack(SL* PS);

// 头插
void SLPushFront(SL* ps, SLDataType n);

// 头删
void SLPopFront(SL* ps);

// 在pos位置插入x(pos就是数组下标)
void SLInsert(SL* ps, int pos, SLDataType x);

// 在pos位置删除
void SLErase(SL* ps, int pos);

// 判断顺序表中是否含有n
int SLFind(SL* ps, SLDataType n);

//修改pos位置的值为x
void SLModify(SL* ps, int pos, SLDataType x);

// 判断是否扩容
void SLCheckCapacity(SL* ps);