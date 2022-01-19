#include<iostream>
#include "Sort.h"
#include "printArray.h"
using namespace std;


int main() {
	int arr1[] = { 8,7,3,55,4,1,90,11 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	bSort(arr1,len);
	printArray(arr1, len);
	system("pause");
}