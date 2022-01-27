//#include <iostream>
//using namespace std;
//
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	//常量指针：意思是：这个是常量的指针。const(常量) int*(指针)
//	//常量指针可乱指，指哪儿打哪儿。
//	const int* pa = &a;
//	
//	cout << *pa << endl;
//	pa = &b;
//	cout << *pa << endl;
//	pa = &c;
//	cout << *pa << endl;
//	pa = &d;
//	cout << *pa << endl;
//	//*pa = 1000;这个是不允许的，因为pa是常量的指针：
//
//	//指针常量：意思是：这个指针是个常量。
//	int v = 50;
//	int x = 60;
//	int y = 70;
//	int z = 80;
//	int* const px = &v;
//	*px = 100;
//	cout << "after update,*px=" << *px << endl;
//
//	//px = &b;//这个操作是不行的，因为这个指针是个常量。 这个指针int* p ，是个常量。
//	//既然这个指针是个常量，那么这个指针是不能修改的，即，他不能指向其他内存空间。
//
//
//
//
//
//}