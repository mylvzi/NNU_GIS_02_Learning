#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

/**
	leetcode刷题总结
*/
//int removeElement(int* nums, int n, int val) {
//    int  slow = -1, fast = 0;
//    while (fast < n) {
//        if (nums[fast] != val)
//            nums[++slow] = nums[fast++];
//        else ++fast;
//    }
//    return slow + 1;
//}
//
//void duplicateZeros(int* arr, int n) {
//    int zero_cnt = 0, l = 0;
//    while (l < n)
//        if (arr[l++] == 0)
//            ++zero_cnt;
//
//    int i = n - 1, j = n + zero_cnt - 1;
//    while (i >= 0) {
//        if (j < n) arr[j] = arr[i];
//        if (arr[i] == 0) {
//            j--;
//            if (j < n) arr[j] = 0;
//        }
//
//        j--; i--;
//    }
//}

/**
	顺序表re
*/
typedef unsigned int ui;
int main() {
	ui i = 0;
	printf("%d\n", i);
	return 0;
}


/**
	实现线性表  list
*/
//int main() {
//
//}