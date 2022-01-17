#include<iostream>
using namespace std;
int main() {
	int a = 20;
	int b = 40;
	int* p = &a;
	/*指针的主要作用，就是对取地址符的一种简化。我们可以通过&a来取变量的内存地址；但没有人会喜欢用
	&a这样，背着个蜗牛壳子来操作指针, 另一方面，输入取地址符&也不方便。 如果有了指针，一个p就搞定，这样阅读起来也清晰。
	另外，注释就是注释，不要在cout里面写注释，主要也是影响代码阅读。如果涉及到换行比较麻烦，刚才就因为在cout中写注释，太长了
	换行程序报错，进而一个误操作把整个代码删了。*/
	//cout << "a的内存地址为：" << p << endl;
	//cout << "通过&a，取地址：" << &a << endl;

	//1. 定义常量指针。 const int* p=&x；
	const int* p2 = &a;  
	p2 = &b;
	cout << "p2's value: " << p2 << endl;
	//注意：因为p2是常量指针，因此无法通过*p2来修改变量内容，编译器会报错。如：*p2 = 88;

	//2. 定义指针常量,记忆技巧：星号为指针的意思，const为常量的意思。
	// 所以 * const，直接翻译为：指针常量
	// const int* ,      直接翻译为：常量指针
	int* const p3 = &a;
	//指针常量，指针的指向不能改哦。p3 = &b; 但是可以改变其所指向的变量内容。
	cout << "before change, a  value:" << a << endl;
	*p3 = 888;
	cout << "after change, a  value:" << a << endl;
	
	//3. const既修饰指针，又修饰常量. 指针的指向和变量内容都不能改。
	const int* const p4 = &b;






	system("pause");
}