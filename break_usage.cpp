#include<iostream>
using namespace std;
/*
* tip:��ʽ�����룺Ctrl+A --> Ctrl+k --> Ctrl+F
*/
int main() {
	int select = 0;
	cout << "��ѡ��" << endl;
	cout << "1. ��������" << endl;
	cout << "2. �޸�����" << endl;
	cout << "3. ɾ������" << endl;
	cin >> select;
	switch (select)
	{
	case 1: cout << "host added" << endl; break;
	case 2: cout << "host updated" << endl; break;
	case 3: cout << "host deleted" << endl; break;
	default:
		break;
	}
	system("pause");
}