#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/**
	字符串相关函数模拟实现
*/
// strlen size_t strlen( const char* str)
////int my_strlen(const char* str) {
////	if (str == NULL) return 0;
////	int n = 0;
////	while (*str++) n++;
////	return n;
////}
//int main() {
//	int n = my_strlen("nihao");
//	printf("%d\n", n);
//	return 0;
//}


// strcpy:void strcpy(char* dest, const char* src)
//void my_strcpy(char* dest, const char* src) {
//	while (*src) *dest++ = *src++;
//	*dest = '\0';
//}
//int main() {
//	char src[] = "hello";
//	char dest[20];
//	my_strcpy(dest, src);
//	printf("%s\n", dest);
//	return 0;
//}

// strcat
//char* mystrcat(char* dest, const char* src) {
//	// dest = dest + src
//	char* p = dest;
//	while (*dest) dest++;
//	while (*src) *dest++ = *src++;
//	*dest = '\0';
//	return p;
//}
//int main() {
//	char src[] = "nihao";
//	char dest[20] = "";// 最好这样子初始化  否则里面全是？
//	mystrcat(dest, src);
//	printf("%s\n", dest);
//	return 0;
//}

/**
	C语言中进行字符串比较  使用strcmp函数  不能使用 == 用于判断地址是否相同
	按照字典序进行比较  前面的字符小 后面的字符大
*/
//#include <string.h>
//# include <assert.h>
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1);
//	assert(str2);
//
//	while (*str1 && *str2) {
//		if (*str1 > *str2) return 1;
//		if (*str1 < *str2) return -1;
//		++str1; ++str2;
//	}
//
//	if (*str1 > *str2) return 1;
//	if (*str1 < *str2) return -1;
//	return 0;
//}
//int main() {
//	char str1[] = "mike";
//	char str2[] = "nik";
//	printf("%d\n", strcmp(str1, str2));
//	printf("%d\n", my_strcmp(str1, str2));
//	return 0;
//}
//#include <string.h>
//void my_strncpy(char* dest, const char* src, int n) {
//	int i = 0;
//	while (i < n && src[i]) {
//		dest[i] = src[i];
//		++i;
//	}
//
//	// 长度不够自动补充'\0'
//	while (i < n) dest[i++] = '\0';
//}
//int main() {
//	char s1[] = "nihao";
//	char s2[20] = "";
//	my_strncpy(s2, s1, 8);
//	printf("%s\n", s2);
//	printf("%d\n", strlen(s2));
//	return 0;
//}

#include <string.h>
///**
//	strstr 判断是否含有子串  char* strstr(const char* s1, const char* s2)
//	固定住第一个字符串  依次比较从当前位置开始直到s2结束
//*/
//
//char* my_strstr(const char* s1, const char* s2) {
//	if (s2 == NULL || strlen(s2) == 0) return s1;
//
//	while (*s1) {
//		char* t1 = s1, *t2 = s2;
//		while (*t1 && *t2 && *t1 == *t2) {
//			++t1; ++t2;
//		}
//
//		if (!t2) return s1;
//		++s1;
//	}
//	return NULL;
//}
//int main() {
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simpledasda");
//
//	if (pch == NULL) printf("dont contain");
//	else printf("contain");
//	// printf("%s\n", pch);
//	return 0;
//}


/**
	strtok: char* strtok(char*s1, const char* sep)
*/

char* my_strtok(char* s1, const char* sep) {
	
	return NULL;
}
int main() {
	//char str[] = "1,2,3,4,5";
	//char* tmp = strtok(str, ",");// 注意此处的数据类型是字符串 不能写成''
	//
	//while (tmp != NULL) {
	//	printf("%s\n", tmp);
	//	tmp = strtok(NULL, ",");
	//}

	char str[] = "1,";
	printf("%d\n", strlen(str));
	return 0;
}



