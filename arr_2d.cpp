#include<iostream>
using namespace std;
int main() {
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	/*cout << arr[0][0] << endl;
	cout << arr[0][1] << endl;
	cout << arr[0][2] << endl;*/
	//ʹ��Ƕ��ѭ������ӡ��ά����
	//���ѭ�������������ڲ�ѭ������������
	/*for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
	}*/
	//��λ����ĵڶ��ֶ���
	int arr2[2][3] =
	{
		{1,2,3},  //��һ��
		{4,5,6}   //�ڶ���
	};
	int arr3[][3] = { 1,2,3,4,5,6 };
	cout <<"������"<< sizeof(arr3) / sizeof(arr3[0]);
	cout << "������" << sizeof(arr3[0]) / sizeof(arr[0][0]);
	cout << endl;
	cout << "��ά������׵�ַ��" << (int)arr3 << endl;
	cout << "��һ�е��׵�ַ��" << (int)arr3[0] << endl;
	cout << "��һ��Ԫ�ص��׵�ַ" << (int)&arr3[0][0] << endl;
	cout << "�ڶ��е��׵�ַ��" << (int)arr3[1] << endl;
	system("pause");
}