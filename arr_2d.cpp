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
	//使用嵌套循环来打印二维数组
	//外层循环控制行数，内层循环控制列数；
	/*for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
	}*/
	//二位数组的第二种定义
	int arr2[2][3] =
	{
		{1,2,3},  //第一行
		{4,5,6}   //第二行
	};
	int arr3[][3] = { 1,2,3,4,5,6 };
	cout <<"行数："<< sizeof(arr3) / sizeof(arr3[0]);
	cout << "列数：" << sizeof(arr3[0]) / sizeof(arr[0][0]);
	cout << endl;
	cout << "二维数组的首地址：" << (int)arr3 << endl;
	cout << "第一行的首地址：" << (int)arr3[0] << endl;
	cout << "第一个元素的首地址" << (int)&arr3[0][0] << endl;
	cout << "第二行的首地址：" << (int)arr3[1] << endl;
	system("pause");
}