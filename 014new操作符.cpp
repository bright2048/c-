//#include<iostream>	
//using namespace std;
//int* func() {
//	//�ڶ�������һ������
//	//new�ؼ��ַ��ص���һ�����������͵�ָ�롣
//	int* p=new int(10);
//	return p;
//}
//void test01() {
//	int* x = func();
//	cout << *x << endl;
//	cout << *x << endl;
//	cout << *x << endl;
//	delete x;
//	cout << *x << endl;
//
//}
////�ڶ��������ڴ�
//void test02() {
//	int x[] = {1,2,3};
//	int* p = new int[10]{1,2,3,4,5,6,7,8,9,0};
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *p << endl;
//		p++;
//	}
//
//}
//void test03() {
//	int* arr=new int[10];//��new��������ʱ��Ҫע�⣬Ҫ�÷����ţ� new int[10]
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 100 + i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *arr << endl;
//		cout << arr[i] << endl;
//	}
//	//����������delete[]���ͷ�����
//	delete[] arr;
//	//cout << *arr << endl;
//}
//int main() {
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//}