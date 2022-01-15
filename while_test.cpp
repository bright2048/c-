#include<iostream>
#define MAX_TIMES 5
using namespace std;
int main() {
	srand((unsigned int)time(NULL));
	int rdm=rand()%100+1;
	int guess = 0;
	int tries = 0;
	cout << "猜数字游戏现在开始。。。。" << endl;
	cout << "猜猜看,只有"<<MAX_TIMES<<"次机会哦!" << endl;
	while (tries<MAX_TIMES)
	{
		tries++;
		cout << "guess" << tries << ":" << endl;
		cin >> guess;
		if (guess > rdm) {
			cout << "猜大了，小一点试试看：" << endl;
		}
		else if(guess < rdm) {
			cout << "猜小了，大一点试试看：" << endl;
		}
		else {
			cout << "猜中了，恭喜你！谜底数字为：" << rdm << endl;
			break;
		}
		
	}
	
	system("pause");
}