#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
#include <stdlib.h>
typedef int SLDataType;
typedef struct SequenceList {
	SLDataType* arr;
	int capacity;
	int size;
}SL;
//ͷ�ļ�  ��������
//��ʼ��˳���
void SLInit(SL* ps);

//ɾ��˳���
void SLDestroy(SL* ps);

//��ӡ˳���
void SLPrint(SL* ps);

/**
	��ɾ�Ĳ�
*/
// β��
void SLPushBack(SL* ps, SLDataType n);

// βɾ
void SLPopBack(SL* PS);

// ͷ��
void SLPushFront(SL* ps, SLDataType n);

// ͷɾ
void SLPopFront(SL* ps);

// ��posλ�ò���x(pos���������±�)
void SLInsert(SL* ps, int pos, SLDataType x);

// ��posλ��ɾ��
void SLErase(SL* ps, int pos);

// �ж�˳������Ƿ���n
int SLFind(SL* ps, SLDataType n);

//�޸�posλ�õ�ֵΪx
void SLModify(SL* ps, int pos, SLDataType x);

// �ж��Ƿ�����
void SLCheckCapacity(SL* ps);