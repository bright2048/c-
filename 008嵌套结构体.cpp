//#include <string>
//#include <iostream>
//using namespace std;
////如果函数只是做打印操作，用值传递即可。如果说要做修改操作，则视情况用地址传递。
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
////值传递实现方式
//void printTeacher(struct Teacher t) {
//	cout << "teacher name:" << t.name << "\t teahcer id:" << t.id << "\t teacher age:" << t.age << "\t teacher's student name:" << t.stu.name << endl;
//}
////地址传递实现方式。
//void printTeacher2(struct Teacher* t) {
//	//指针要用->来访问
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
