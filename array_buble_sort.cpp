#include<iostream>
using namespace std;
int main() {
	int arr[] = {5,4,6,3,9,0,2,1};
	int temp = 0;
	int arrLen = sizeof(arr) / sizeof(arr[0]);

	for (int j = 0; j < arrLen; j++)
	{
		for (int i = 0; i < arrLen - 1-j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
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