//#include <iostream>
//using namespace std;
//
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	//����ָ�룺��˼�ǣ�����ǳ�����ָ�롣const(����) int*(ָ��)
//	//����ָ�����ָ��ָ�Ķ����Ķ���
//	const int* pa = &a;
//	
//	cout << *pa << endl;
//	pa = &b;
//	cout << *pa << endl;
//	pa = &c;
//	cout << *pa << endl;
//	pa = &d;
//	cout << *pa << endl;
//	//*pa = 1000;����ǲ�����ģ���Ϊpa�ǳ�����ָ�룺
//
//	//ָ�볣������˼�ǣ����ָ���Ǹ�������
//	int v = 50;
//	int x = 60;
//	int y = 70;
//	int z = 80;
//	int* const px = &v;
//	*px = 100;
//	cout << "after update,*px=" << *px << endl;
//
//	//px = &b;//��������ǲ��еģ���Ϊ���ָ���Ǹ������� ���ָ��int* p ���Ǹ�������
//	//��Ȼ���ָ���Ǹ���������ô���ָ���ǲ����޸ĵģ�����������ָ�������ڴ�ռ䡣
//
//
//
//
//
//}