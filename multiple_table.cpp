#include<iostream>
using namespace std;
int main() {

	//���ɣ���һ��ѭ����ִ��һ�Σ��ڶ���ѭ����ִ�����Σ���n��ѭ����ִ��n��
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