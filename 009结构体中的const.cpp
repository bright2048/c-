//#include<iostream>
//using namespace std;
//struct student {
//	string name;
//	int age;
//	int score;
//};
////void printStu(struct student s) {
////	cout << s.name << "\t" << s.age << "\t" << s.score << endl;
////}
////�β���ʹ��ָ�룬Ϊ�˷�ֹ�������޸Ĵ�������ָ��ָ������ݣ��Ƽ���������ʹ�ó���ָ����Ϊ�βΣ�����
//void printStu(const struct student* s) {
//	//�β��нṹ��ǰ�����const�������޸Ļᱨ��s->name = "zhaoliu";
//	cout << s->name << "\t" << s->age << "\t" << s->score << endl;
//}
//int main() {
//	struct student s = { "zhangsan",30,90 };
//	printStu(&s);
//	system("pause");
//}