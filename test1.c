#define _CRT_SECURE_NO_WARNINGS 1
// �����ع�

#include <stdio.h>

//int main()
//{
//	//char name[20];
//	//printf("������������֣�");
//	//scanf("%s", name);
//	//printf("hello, %s!\n", name);
//	//return 0;
//
//
//}


//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a, b;
//	printf("��ֱ�����a,b��ֵ:");
//	scanf("%d %d", &a, &b);
//	int bigger = max(a, b);
//	printf("max = %d", bigger);
//	return 0;
//}

//void swap(int* a, int* b)
//{
//	int tmp = *a; *a = *b; *b = tmp;
//}
//
//int main()
//{
//	int x = 3, y = 4;
//	swap(&x, &y);
//	printf("swap x and y \n");
//	printf("x = %d, y = %d \n", x, y);
//
//	return 0;
//}

//int main()
//{
//	// for
//	int arr[] = { 1,2,3,4,5 }; 
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

#include <stdlib.h>
// dynamic memory
//int main()
//{
//	/**
//		malloc: void* malloc(size_t size)
//	*/
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc error");
//		return 1;
//	}
//
//	// ......
//
//	// end
//	free(p);// free block
//	p = NULL;// aovid nullptr
//	return 0;
//}

/**
	realloc: void* realloc(void* p, size_t size)
	���� - ʹ�� - �ͷ�
	���룺�ж���������ɹ�
	ʹ�ã���ҪԽ��
	�ͷţ���ʱ�ͷ��ڴ�  ����Ұָ��
*/

//int main()
//{
//	int* p = (int*)malloc(8 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("fail to malloc");
//		return 1;
//	}
//
//	int n1 = sizeof(p) / sizeof(p[0]);
//	for (int i = 0; i < n1; ++i)
//	{
//		p[i] = i + 1;
//		printf("%d ", p[i]);
//	}
//
//	printf("\n--------------------------\n");
//	//realloc
//	int* ptr = (int*)realloc(p, 16 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr; ptr = NULL;
//	}
//	else
//	{
//		perror("fail to realloc");
//		return 1;
//	}
//
//	for (int i = 0; i < 16; i++)
//	{
//		p[i] = (i + 1) * 2;
//		printf("%d ", p[i]);
//	}
//
//	// free
//	free(p);
//	p = NULL;
//
//	return 0;
//}

/**
	c������û��String���ͣ� �ַ������������ַ����飨��/0��β��
	strcpy: char* strcpy(char* dest, const char* src)
*/

//char* mystrcpy(char* dest, const char* src)
//{
//	//char* p = dest;
//	//while (*src){
//	//	*p++ = *src++;
//	//}
//	//*p = '\0';
//
//	int i = 0;
//	while (src[i] != '\0') {
//		dest[i] = src[i];
//		++i;
//	}
//	dest[i] = '\0';
//	return dest;
//}

/**
	strncpy: char* strncpy(char* dest, char* src, size_t n)
	1. if len(src) < n �����\0, ֱ������ƥ��n
	2. if len(src) > n �������\0,��Ҫ�ֶ�ƥ��
*/
//int main()
//{
//	// use strcpy
//	char src[] = "hello";
//	char dest[20];
//
//	int n = 3;
//	strncpy(dest, src, n);
//	dest[n - 1] = '\0';
//	// mystrcpy(dest, src);
//	printf("src = %s\n", src);
//	printf("dest = %s\n", dest);
//	return 0;
//}

// simulate
//char* mystrncpy(char* dest, char* src, size_t n) {
//	//size_t i = 0;
//	//while (i < n && src[i]) {
//	//	dest[i] = src[i]; ++i;
//	//}
//	//dest[i] = '\0';
//	return dest;
//}

//int my_strlen(const char* str) {
//	int n = 0;
//	while (*str++) ++n;
//	return n;
//}
//int main() {
//	// strlen: size_t strlen(const char* str)
//	int n = my_strlen("nihao");
//	printf("n = %d", n);
//	return 0;
//}

//void swap(char* a, char* b) {
//	char tmp = *a; *a = *b; *b = tmp;
//}
//void reverse(char* str) {
//	// ע��˴��пӣ� char* begin, end = str; begin��char*������end��char
//	// char *begin = str, *end = str + strlen(str) - 1;
//	char *begin = str, *end = str + strlen(str) - 1;
//	while (begin < end) swap(begin++, end--);
//}
// reverse str
//int main() {
//	char str[] = "abcd";
//	printf("��תǰ��%s\n", str);
//	reverse(str);
//	printf("��ת��%s", str);
//	return 0;
//}


















