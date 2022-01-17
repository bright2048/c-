#include<iostream>
using namespace std;
int main() {
	int pigArray[] = { 100,110,220,550,400,350,250,210,160 };
	int MAX = 0;
	int amount = sizeof(pigArray) / sizeof(int);
	for (int i = 0; i < amount; i++)
	{
		cout<<"pigArray [" <<i<<"]=" <<pigArray[i] << endl;
		if (MAX< pigArray[i])
		{
			MAX = pigArray[i];
		}
	}
	cout << "heavies pig is :" << MAX << endl;

	system("pause");
}