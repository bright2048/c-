//#include <string>
//#include <iostream>
//using namespace std;
////�������ֻ������ӡ��������ֵ���ݼ��ɡ����˵Ҫ���޸Ĳ�������������õ�ַ���ݡ�
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//struct Teacher
//{
//	string id;
//	string name;
//	int age;
//	struct Student stu;
//
//};
////ֵ����ʵ�ַ�ʽ
//void printTeacher(struct Teacher t) {
//	cout << "teacher name:" << t.name << "\t teahcer id:" << t.id << "\t teacher age:" << t.age << "\t teacher's student name:" << t.stu.name << endl;
//}
////��ַ����ʵ�ַ�ʽ��
//void printTeacher2(struct Teacher* t) {
//	//ָ��Ҫ��->������
//	t->name = "bright";
//	cout << "teacher name:" << t->name << "\t teahcer id:" << t->id << "\t teacher age:" << t->age << "\t teacher's student name:" << t->stu.name << endl;
//}
//int main() {
//	Teacher t;
//	t.name = "zhanglaoshi";
//	t.id = "001";
//	t.age = 40;
//	t.stu.name = "xiaoming";
//	t.stu.age = 20;
//	t.stu.score = 100;
//	printTeacher(t);
//	struct Teacher* p = &t;
//	printTeacher2(p);
//	system("pause");
//}
