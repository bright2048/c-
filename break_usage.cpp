#include<iostream>
using namespace std;
/*
* tip:格式化代码：Ctrl+A --> Ctrl+k --> Ctrl+F
*/
int main() {
	int select = 0;
	cout << "请选择：" << endl;
	cout << "1. 增加主机" << endl;
	cout << "2. 修改主机" << endl;
	cout << "3. 删除主机" << endl;
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