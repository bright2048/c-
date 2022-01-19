#include<iostream>
using namespace std;
///*address transfer*/
///*关于指针，我的理解：
//* 对于如下指针定义
//int*  p=NULL；其中int*表示为指针类型，p表示指针变量，p里面只能存放内存地址
//而*p就是用来访问指针所指向的内存地址的值。
//有些教程里面写成 int *p=NULL；又说*p表示指针。这样是不严谨的。因为这个和前面所说的*p混淆了
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