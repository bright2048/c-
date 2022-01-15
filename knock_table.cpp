#include<iostream>
using namespace std;
/*

*/
int main() {
	for (int i = 1; i <=100; i++)
	{
		//cout << i << endl;
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0) {
			cout << "i=" << i << ",knock table!" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");
}