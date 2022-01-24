#include<iostream>
using namespace std;
class Person {
public:
	int* m_Height; //身高
	int m_Age;
	Person() {
		cout << "无参构造" << endl;
	}
	Person(int age,int height) {
		m_Age = age;
		m_Height=new int(height);//用指针接受new出来的对象

		cout << "有参构造函数" << endl;
	}
	//拷贝构造函数，
	Person(const Person& p) {
		cout <<"person拷贝狗的调用" << endl;
		m_Age = p.m_Age;
		//系统默认的拷贝函数是直接将传进来的对象的成员的指针赋值给了自身的成员：
		//m_Height = p.m_Height;
		//解决办法：自己重新用new在堆区开辟内存空间，到时析构的时候，两个对象各释放各的堆内存空间。
		m_Height =new int(*p.m_Height);
	}
	~Person()
	{
		//将堆区开辟的数据做一个释放的操作
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "destructor" << endl;
	}

};
void test() {
	//浅拷贝测试：
	Person p1(18,160);
	cout << "p1的年龄为：" << p1.m_Age << "身高为："<<p1.m_Height<<endl;
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << p2.m_Height<< endl;
	/*
	* 通过浅拷贝，两个对象的成员变量指针指向同一块内存空间。所以在析构的时候会产生重复释放异常
	p1的年龄为：18身高为：0079A958
	p2的年龄为：18身高为：0079A958
*/

}
int main() {
	test();
	system("pause");
}