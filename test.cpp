#include<iostream>
using namespace std;
int main() {
	int arr[] = { 7,6,9,4,7,3,6,1,2,7 };
	int temp = 0;
	int arrLen = sizeof(arr) / sizeof(arr[0]);
	//�������жԱȣ�ǰ����ں����򽻻�
	//
	for (int j = 0; j < arrLen; j++)
	{
		for (int i = 0; i < arrLen - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < arrLen; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
}