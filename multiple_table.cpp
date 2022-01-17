#include<iostream>
using namespace std;
int main() {

	//规律：第一次循环，执行一次；第二次循环，执行两次；第n次循环，执行n次
	//cout << 1 << "x" << 1 << "=" << (1 * 1)<<"\t";
	//cout<< endl;
	//cout << 1 << "x" << 2 << "=" << (1 * 2) << "\t";
	//cout << 2 << "x" << 2 << "=" << (2 * 2) << "\t";
	//cout << endl;
	//cout << 1 << "x" << 3 << "=" << (1 * 3) << "\t";
	//cout << 2 << "x" << 3 << "=" << (2 * 3) << "\t";
	//cout << 3 << "x" << 3 << "=" << (3 * 3) << "\t";
	//cout << endl;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "x" << i << "=" << (j * i) << "\t";
		}
		cout << endl;
	}
	system("pause");
}