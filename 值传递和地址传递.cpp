#include<iostream>
using namespace std;
///*address transfer*/
///*����ָ�룬�ҵ���⣺
//* ��������ָ�붨��
//int*  p=NULL������int*��ʾΪָ�����ͣ�p��ʾָ�������p����ֻ�ܴ���ڴ��ַ
//��*p������������ָ����ָ����ڴ��ַ��ֵ��
//��Щ�̳�����д�� int *p=NULL����˵*p��ʾָ�롣�����ǲ��Ͻ��ġ���Ϊ�����ǰ����˵��*p������
//*/
//void swap(int* n1, int* n2) {
//	int temp = 0;
//	temp = *n1;
//	*n1 = *n2;
//	*n2 = temp;
//}
//int main() {
//	int a = 88;
//	int b = 2022;
//	cout << "before swap: a=" << a << "; b=" << b << endl;
//	swap(&a, &b);
//	cout << "after swap: a=" << a << "; b=" << b << endl;
//	system("pause");
//}

/*value transfer*/
/* 
as you can see,  value a and b doesn't change at all after invoke func swap, 
*/
void swap(int n1, int n2) {
	int temp = 0;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
int main() {
	int a = 88;
	int b = 2022;
	cout << "before swap: a=" << a << "; b=" << b << endl;
	swap(a, b);
	cout << "after swap: a=" << a << "; b=" << b << endl;
	system("pause");
}