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
////形参中使用指针，为了防止函数内修改传进来的指针指向的内容，推荐的做法是使用常量指针作为形参，如下
//void printStu(const struct student* s) {
//	//形参中结构体前面加了const，所以修改会报错：s->name = "zhaoliu";
//	cout << s->name << "\t" << s->age << "\t" << s->score << endl;
//}
//int main() {
//	struct student s = { "zhangsan",30,90 };
//	printStu(&s);
//	system("pause");
//}