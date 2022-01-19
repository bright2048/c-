#include<iostream>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
int main() {
	student sArr[3] =
	{
		{"zhangsan",19,100},
		{"lisi",21,98 },
		{"wangwu",24,87}
	};
	sArr[2].name = "zhaoliu";
	sArr[2].age = 20;
	sArr[2].score = 99;
	for (int i = 0; i < 3; i++)
	{
		cout << "name:" << sArr[i].name << "\t age:"
			<< sArr[i].age << "\t score:" << sArr[i].score << endl;
	}
	system("pause");
}