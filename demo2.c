#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/**
	�ַ�����غ���ģ��ʵ��
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
//	char dest[20] = "";// ��������ӳ�ʼ��  ��������ȫ�ǣ�
//	mystrcat(dest, src);
//	printf("%s\n", dest);
//	return 0;
//}

/**
	C�����н����ַ����Ƚ�  ʹ��strcmp����  ����ʹ�� == �����жϵ�ַ�Ƿ���ͬ
	�����ֵ�����бȽ�  ǰ����ַ�С ������ַ���
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
//	// ���Ȳ����Զ�����'\0'
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
//	strstr �ж��Ƿ����Ӵ�  char* strstr(const char* s1, const char* s2)
//	�̶�ס��һ���ַ���  ���αȽϴӵ�ǰλ�ÿ�ʼֱ��s2����
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
	//char* tmp = strtok(str, ",");// ע��˴��������������ַ��� ����д��''
	//
	//while (tmp != NULL) {
	//	printf("%s\n", tmp);
	//	tmp = strtok(NULL, ",");
	//}

	char str[] = "1,";
	printf("%d\n", strlen(str));
	return 0;
}



