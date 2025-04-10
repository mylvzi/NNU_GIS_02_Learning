#define _CRT_SECURE_NO_WARNINGS 1
#include "SL.h"
/**
	������
*/
//int getNextNum(int n) {
//    int sum = 0;
//    while (n > 0) {
//        int digit = n % 10;
//        sum += digit * digit;
//        n /= 10;
//    }
//    return sum;
//}
//
//bool isHappy(int n) {
//    int slow = n, fast = getNextNum(n);
//    while (slow != fast) {
//        slow = getNextNum(slow);
//        fast = getNextNum(getNextNum(fast));
//    }
//    return slow == 1;
//}
#include <stdio.h>
#include <stdlib.h>
// malloc: void* malloc(size_t size)
// realloc: void* realloc(void* ptr, size_t size)
//int main() {
//	int* arr = (int*)malloc(10 * sizeof(int));// �ڶ�������40�ֽڴ�С������
//	if (arr == NULL) {
//		perror("fail to malloc");
//		return 0;
//	}
//
//	
//	// ����
//	int* tmp = (int*)realloc(arr, 8 * sizeof(int));
//	if (tmp == NULL) {
//		perror("fail to realloc");
//		return 0;
//	}
//	arr = tmp;
//	free(tmp); tmp = NULL;
//	free(arr);
//	arr = NULL;
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//// ��̬˳���  ������С�̶�
//#define N 10// �˴������;
//typedef int SLDatatype;
//
//typedef struct SequenceList {
//	SLDatatype arr[N];
//	int size;// ��Ч���ݸ���
//}SL;

/**
	��̬˳���: �����С���̶�-->��̬�����ڴ�-->malloc����-->ָ��
*/
typedef int SLDataType;

#include <assert.h>
//// ��ʼ��
//void SLInit(SL* ps) {
//	assert(ps);
//	ps->arr = (SLDataType*)malloc(10 * sizeof(SLDataType));
//	if (ps->arr == NULL) {
//		perror("fail to malloc");
//		exit(-1);
//	}
//
//	ps->capacity = 10;
//	ps->size = 0;
//}
//
//void SLDestroy(SL* ps) {
//	assert(ps);
//	free(ps->arr);
//	ps->arr = NULL;
//
//	ps->capacity = ps->size = 0;
//}
//
//void SLPrint(SL* ps) {
//	assert(ps);
//	for (int i = 0; i < ps->size; ++i) {
//		printf("%d ", ps->arr[i]);
//	}
//}
//
//// β��
//void SLPushBack(SL* ps, SLDataType n) {
//	assert(ps);
//	SLCheckCapacity(ps);
//
//	ps->arr[ps->size] = n;
//	ps->size++;
//
//	// ֱ�Ӹ���
//	// SLInsert(ps, ps->size, n);
//}
//
//// βɾ  ֱ������Ч���ݸ���--����  �������Ҳ��ֱ�Ӹ���
//void SLPopBack(SL* ps) {
//	assert(ps);
//	assert(ps->size > 0);// assert���������������  �������ű���
//
//	// ��Ϊ��
//	ps->size--;
//}
//
//// ͷ��
//void SLPushFront(SL* ps, SLDataType n) {
//	assert(ps);
//	SLCheckCapacity(ps);
//
//	// ��֤�������
//	for (int i = ps->size; i > 0; i--) {
//		ps->arr[i] = ps->arr[i - 1];
//	}
//	ps->arr[0] = n;
//	ps->size++;
//
//	// ����
//	// SLInsert(ps, 0, n);
//}
//
//// ͷɾ
//void SLPopFront(SL* ps) {
//	assert(ps);
//	assert(ps->size > 0);
//
//	for (int i = 0; i < ps->size - 1; ++i) {
//		ps->arr[i] = ps->arr[i + 1];
//	}
//	ps->size--;
//}
//
//// ��posλ�ò���x(pos���������±�)
//void SLInsert(SL* ps, int pos, SLDataType x) {
//	assert(ps);
//	assert(pos >= 0 && pos <= ps->size);
//	SLCheckCapacity(ps);
//
//	for (int i = ps->size; i > pos; --i) {
//		ps->arr[i] = ps->arr[i - 1];
//	}
//	ps->arr[pos] = x;
//	ps->size++;
//}
//
//// ��posλ��ɾ��
//void SLErase(SL* ps, int pos) {
//	assert(ps);
//	assert(pos >= 0 && pos < ps->size);
//	assert(ps->size > 0);
//
//	for (int i = pos; i < ps->size - 1; ++i)
//		ps->arr[i] = ps->arr[i + 1];
//	ps->size--;
//}
//
//// �ж�˳������Ƿ���n
//int SLFind(SL* ps, SLDataType n) {
//	assert(ps);
//
//	for (int i = 0; i < ps->size; ++i)
//		if (ps->arr[i] == n)
//			return i;
//	return 0;// ������
//}
//
////�޸�posλ�õ�ֵΪx
//void SLModify(SL* ps, int pos, SLDataType x) {
//	assert(ps);
//	assert(pos >= 0 && pos < ps->size);
//
//	ps->arr[pos] = x;
//}
//
//
//
//
//
//
//// ����Ƿ���Ҫ����
//void SLCheckCapacity(SL* ps) {
//	assert(ps);
//	if (ps->size == ps->capacity) {
//		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;// ��ֹ����û�г�ʼ��
//		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
//		if (tmp == NULL) {
//			perror("fail to realloc");
//			exit(-1);
//		}
//
//		ps->arr = tmp;
//		ps->capacity = newCapacity;
//	}
//}


//��ʼ��˳���
void SLInit(SL* ps) {
	ps->arr = (SLDataType*)malloc(4 * sizeof(SLDataType));
	if (ps->arr == NULL) {
		perror("fail to malloc");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

//ɾ��˳���
void SLDestroy(SL* ps) {
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//��ӡ˳���
void SLPrint(SL* ps) {
	assert(ps);
	for (int i = 0; i < ps->size; ++i) {
		printf("%d ", ps->arr[i]);
	}
}

/**
	��ɾ�Ĳ�
*/
// β��
void SLPushBack(SL* ps, SLDataType n) {
	SLInsert(ps, ps->size, n);
}

// βɾ
void SLPopBack(SL* ps) {
	SLErase(ps, ps->size - 1);
}

// ͷ��
void SLPushFront(SL* ps, SLDataType n) {
	SLInsert(ps, 0, n);
}

// ͷɾ
void SLPopFront(SL* ps) {
	SLErase(ps,0);
}

// ��posλ�ò���x(pos���������±�)
void SLInsert(SL* ps, int pos, SLDataType x) {
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);

	for (int i = ps->size - 1; i >= pos; --i) {
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[pos] = x;
	ps->size++;
}

// ��posλ��ɾ��
void SLErase(SL* ps, int pos) {
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	assert(ps->size >= 0);

	for (int i = pos; i < ps->size - 1; ++i) {
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

// �ж�˳������Ƿ���n
int SLFind(SL* ps, SLDataType n) {
	for (int i = 0; i < ps->size; ++i)
		if (ps->arr[i] == n)
			return 1;
	return 0;
}

//�޸�posλ�õ�ֵΪx
void SLModify(SL* ps, int pos, SLDataType x) {
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	ps->arr[pos] = x;
}

// �ж��Ƿ�����
void SLCheckCapacity(SL* ps) {
	assert(ps);
	if (ps->size == ps->capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, 2 * newCapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			perror("fail to realloc");
			exit(-1);
		}

		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}


int main() {
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(&s);      // ���: 1 2 3 4

	SLErase(&s, 0);   // ɾ��ͷ��
	SLPrint(&s);      // ���: 2 3 4

	SLErase(&s, 1);   // ɾ���м�
	SLPrint(&s);      // ���: 2 4

	SLErase(&s, 1);   // ɾ��β��
	SLPrint(&s);      // ���: 2

	SLModify(&s, 0, 1);
	SLPrint(&s);      // ���: 2
	printf("Size: %d, Capacity: %d\n", s.size, s.capacity);
	free(s.arr);
	return 0;
}