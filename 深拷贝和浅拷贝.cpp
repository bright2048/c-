#include<iostream>
using namespace std;
class Person {
public:
	int* m_Height; //���
	int m_Age;
	Person() {
		cout << "�޲ι���" << endl;
	}
	Person(int age,int height) {
		m_Age = age;
		m_Height=new int(height);//��ָ�����new�����Ķ���

		cout << "�вι��캯��" << endl;
	}
	//�������캯����
	Person(const Person& p) {
		cout <<"person�������ĵ���" << endl;
		m_Age = p.m_Age;
		//ϵͳĬ�ϵĿ���������ֱ�ӽ��������Ķ���ĳ�Ա��ָ�븳ֵ��������ĳ�Ա��
		//m_Height = p.m_Height;
		//����취���Լ�������new�ڶ��������ڴ�ռ䣬��ʱ������ʱ������������ͷŸ��Ķ��ڴ�ռ䡣
		m_Height =new int(*p.m_Height);
	}
	~Person()
	{
		//���������ٵ�������һ���ͷŵĲ���
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "destructor" << endl;
	}

};
void test() {
	//ǳ�������ԣ�
	Person p1(18,160);
	cout << "p1������Ϊ��" << p1.m_Age << "���Ϊ��"<<p1.m_Height<<endl;
	Person p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << p2.m_Height<< endl;
	/*
	* ͨ��ǳ��������������ĳ�Ա����ָ��ָ��ͬһ���ڴ�ռ䡣������������ʱ�������ظ��ͷ��쳣
	p1������Ϊ��18���Ϊ��0079A958
	p2������Ϊ��18���Ϊ��0079A958
*/

}
int main() {
	test();
	system("pause");
}