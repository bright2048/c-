#include<iostream>
using namespace std;

void bSort(int* arr, int Length)
{
	int arrLen = Length;
	int temp = 0;
	//cout << arrLen;
	for (int j = 0; j < arrLen - 1; j++)
	{
		for (int i = 0; i < arrLen - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

}