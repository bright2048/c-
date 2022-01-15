#include<iostream>
using namespace std;

int main() {

	//this is really stupid way to print 10 rows stars
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;


	system("pause");
}
//黑马的老师讲得挺好的，为了优化上面的代码，重复执行10次打印单行星的代码。
// 所以我们用外部循环，来控制执行打印单行星代码的次数。
// 如果要打印100行呢。那就改变外部循环的变量长度即可。
//int main(){
//	for ( int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("* "); //内部循环，利用printf，打印，不用换行
//			// cout << "* "; 哦，原来endl是回车的作用。用这个也可以的。
//		}
//		cout << endl;  //外部循环，控制换行。
//		
//	}
//	system("pause");
//}
