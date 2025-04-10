#define _CRT_SECURE_NO_WARNINGS 1
#include "SL.h"
/**
	快乐数
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
//	int* arr = (int*)malloc(10 * sizeof(int));// 在堆上申请40字节大小的数据
//	if (arr == NULL) {
//		perror("fail to malloc");
//		return 0;
//	}
//
//	
//	// 扩容
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
//// 静态顺序表  容量大小固定
//#define N 10// 此处不添加;
//typedef int SLDatatype;
//
//typedef struct SequenceList {
//	SLDatatype arr[N];
//	int size;// 有效数据个数
//}SL;

/**
	动态顺序表: 数组大小不固定-->动态分配内存-->malloc开辟-->指针
*/
typedef int SLDataType;

#include <assert.h>
//// 初始化
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
//// 尾插
//void SLPushBack(SL* ps, SLDataType n) {
//	assert(ps);
//	SLCheckCapacity(ps);
//
//	ps->arr[ps->size] = n;
//	ps->size++;
//
//	// 直接复用
//	// SLInsert(ps, ps->size, n);
//}
//
//// 尾删  直接让有效数据个数--即可  后续添加也会直接覆盖
//void SLPopBack(SL* ps) {
//	assert(ps);
//	assert(ps->size > 0);// assert是里面成立不报警  不成立才报警
//
//	// 不为空
//	ps->size--;
//}
//
//// 头插
//void SLPushFront(SL* ps, SLDataType n) {
//	assert(ps);
//	SLCheckCapacity(ps);
//
//	// 保证不会溢出
//	for (int i = ps->size; i > 0; i--) {
//		ps->arr[i] = ps->arr[i - 1];
//	}
//	ps->arr[0] = n;
//	ps->size++;
//
//	// 复用
//	// SLInsert(ps, 0, n);
//}
//
//// 头删
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
//// 在pos位置插入x(pos就是数组下标)
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
//// 在pos位置删除
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
//// 判断顺序表中是否含有n
//int SLFind(SL* ps, SLDataType n) {
//	assert(ps);
//
//	for (int i = 0; i < ps->size; ++i)
//		if (ps->arr[i] == n)
//			return i;
//	return 0;// 不包含
//}
//
////修改pos位置的值为x
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
//// 检查是否需要扩容
//void SLCheckCapacity(SL* ps) {
//	assert(ps);
//	if (ps->size == ps->capacity) {
//		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;// 防止有人没有初始化
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


//初始化顺序表
void SLInit(SL* ps) {
	ps->arr = (SLDataType*)malloc(4 * sizeof(SLDataType));
	if (ps->arr == NULL) {
		perror("fail to malloc");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

//删除顺序表
void SLDestroy(SL* ps) {
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//打印顺序表
void SLPrint(SL* ps) {
	assert(ps);
	for (int i = 0; i < ps->size; ++i) {
		printf("%d ", ps->arr[i]);
	}
}

/**
	增删改查
*/
// 尾插
void SLPushBack(SL* ps, SLDataType n) {
	SLInsert(ps, ps->size, n);
}

// 尾删
void SLPopBack(SL* ps) {
	SLErase(ps, ps->size - 1);
}

// 头插
void SLPushFront(SL* ps, SLDataType n) {
	SLInsert(ps, 0, n);
}

// 头删
void SLPopFront(SL* ps) {
	SLErase(ps,0);
}

// 在pos位置插入x(pos就是数组下标)
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

// 在pos位置删除
void SLErase(SL* ps, int pos) {
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	assert(ps->size >= 0);

	for (int i = pos; i < ps->size - 1; ++i) {
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

// 判断顺序表中是否含有n
int SLFind(SL* ps, SLDataType n) {
	for (int i = 0; i < ps->size; ++i)
		if (ps->arr[i] == n)
			return 1;
	return 0;
}

//修改pos位置的值为x
void SLModify(SL* ps, int pos, SLDataType x) {
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	ps->arr[pos] = x;
}

// 判断是否扩容
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
	SLPrint(&s);      // 输出: 1 2 3 4

	SLErase(&s, 0);   // 删除头部
	SLPrint(&s);      // 输出: 2 3 4

	SLErase(&s, 1);   // 删除中间
	SLPrint(&s);      // 输出: 2 4

	SLErase(&s, 1);   // 删除尾部
	SLPrint(&s);      // 输出: 2

	SLModify(&s, 0, 1);
	SLPrint(&s);      // 输出: 2
	printf("Size: %d, Capacity: %d\n", s.size, s.capacity);
	free(s.arr);
	return 0;
}