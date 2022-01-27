//#include<iostream>	
//using namespace std;
//int* func() {
//	//在堆区创建一个变量
//	//new关键字返回的是一个该数据类型的指针。
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
////在堆区开辟内存
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
//	int* arr=new int[10];//用new创建数组时，要注意，要用方括号： new int[10]
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 100 + i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *arr << endl;
//		cout << arr[i] << endl;
//	}
//	//用完了请用delete[]来释放数组
//	delete[] arr;
//	//cout << *arr << endl;
//}
//int main() {
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//}