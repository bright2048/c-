#include<iostream>
using namespace std;
int main() {
	//define 3*3 array
	int sum[3] = { 0,0,0 };
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i] += arr[i][j];

		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << sum[i] << endl;
	}
	system("pause");
}