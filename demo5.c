#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1.三数最大
//int max(int a, int b, int c) {
//	return (a >= b) ? a : (b >= c ? b : c);
//}
//int main() {
//	int a, b, c, d;
//	printf("请输入三个数：");
//	scanf(" %d %d %d", &a,&b,&c);
//	d = max(a, b, c);
//	printf("max = %d ", d);
//	return 0;
//}
#include <limits.h>
// 2.
//int main() {
//	int arr[10];
//	int max = INT_MIN;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		max = arr[i] > max ? arr[i] : max;
//	}
//	printf("max = %d", max);
//	return 0;
//}

// 不需要数组
//int main() {
//	int max = INT_MIN, n;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &n);
//		if (n > max) max = n;
//	}
//	return 0;
//}

//// 3.2000 -2500闰年并输出
//int isLeapYear(int i) {
//	//if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//	//	return i;
//	//return 0;
// return (i % 4 == 0 && i % 100 != 0) || i % 400 == 0;
//}
//int main() {
//	for (int i = 2000; i <= 2500; i++) {
//		if (isLeapYear(i))
//			printf("i = %d 是润年\n", i);
//	}
//	return 0;
//}

//// 1+2+3+...+100
//int main() {
//	int sum = 0;
//	for (int i = 1; i <= 100; ++i)
//		sum += i;
//	printf("%d", sum);
//	return 0;
//}

//// 5. 1 - (1/2) + (1/3) +..+(1/99) - (1/100)
//int main() {
//	double sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	printf("%.6lf", sum);
//	return 0;
//}
//#include <stdlib.h>
//#include <time.h>
//// 6.判断是否同时被3,5整除
//int isExactDivisionBy3And5(int i) {
//	return i % 3 == 0 && i % 5 == 0;
//}
//
//// 7.排序并从大到小输出
//void swap(int* x, int* y) {
//	int tmp = *x; *x = *y; *y = tmp;
//}
//void sort(int arr[], int n) {
//	// bubble sort
//	for (int i = 0; i < n - 1; ++i) {
//		int flg = 0;
//		for (int j = 0; j < n - 1 - i; ++j) {
//			if (arr[j] > arr[j + 1]) {
//				swap(&arr[j], &arr[j + 1]);
//				flg = 1;
//			}
//		}
//
//		if (!flg) break;
//	}
//}
//int main() {
//	srand(time(NULL));
//	int arr[10];
//	for (int i = 0; i < 10; i++) {
//		arr[i] = rand() % 100 + 1;
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//	// sort
//	int n = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, n);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//// 8.A->a
//char convert1(char ch) {
//	if (ch >= 'A' && ch <= 'Z')
//		return ch + 32;
// return ch;
//}
//
//int main() {
//	printf("%c", convert1('A'));
//	return 0;
//}

//// 8.a->A
//char convert1(char ch) {
//	if (ch >= 'A' && ch <= 'Z')
//		return ch - 32;
//}
//
//int main() {
//	printf("%c", convert1('A'));
//	return 0;
//}

//#include <ctype.h>
//int main() {
//	printf()
//	return 0;
//}
//#include <ctype.h>
//// 10.输入字符以小写输出
//int main() {
//	char ch;
//	while (~scanf("%c", &ch)) {
//		printf("%c", tolower(ch));
//	}
//
//	return 0;
//}

//#include <math.h>
//// 1.a,b,c 计算三角形面积
//int isTriangle(int a, int b, int c) {
//	return (a + b > c) && (a + c > b) && (b + c > a);
//}
//
//double caluateArea(int a, int b, int c) {
//	double p = (a + b + c) / 2.0;
//	return sqrt(p * (p - a) * (p - b) * (p - c));
//}
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	while (!isTriangle(a, b, c)) {
//		printf("输入错误，重新输入\n");
//		scanf("%d %d %d", &a, &b, &c);
//	}
//	double area = caluateArea(a, b, c);
//	printf("%.6lf", area);
//	return 0;
//}

#include <math.h>
// 根据三个点坐标计算面积
typedef struct Point {
	double x;
	double y;
}P;

double caculateArea(P p1, P p2, P p3) {
	return fabs(p1.x * (p2.y - p3.y) + p2.x * (p1.y - p3.y) + p3.x * (p1.y - p2.y)) / 2.0;
}
int main() {
	P p1 = { 0, 0 };
	P p2 = { 0, 1 };
	P p3 = { 1, 0 };
	double area = caculateArea(p1, p2, p3);
	printf("area = %.6lf", area);
}