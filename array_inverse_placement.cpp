#include<iostream>
using namespace std;
//������ʦ�̵ģ�
//��ʦ��˼·��
//����start��end�������ֱ�ָ���������βλ��
//Ȼ��ʹ��ѭ���Ե���βԪ�أ���++��β--����start==endʱ��ѭ��������
int main() {
	int arr[] = { 9,8,7,3,2,10 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << " ";
	}
	while (start<end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "after repacement...";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
}

//���Լ�д�ģ�
// int main() {
//
//	int arr[] = { 4,5,6,1,2,9,3,8,4 };
//	int arrLen = sizeof(arr) / sizeof(arr[0]);
//	int temp = 0;
//	for (int i = 0; i < arrLen/2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[arrLen - i - 1];
//		arr[arrLen - i - 1] = temp;
//	}
//	for (int i = 0; i < arrLen; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	system("pause");
//}