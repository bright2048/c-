#include<iostream>
#define MAX_TIMES 5
using namespace std;
int main() {
	srand((unsigned int)time(NULL));
	int rdm=rand()%100+1;
	int guess = 0;
	int tries = 0;
	cout << "��������Ϸ���ڿ�ʼ��������" << endl;
	cout << "�²¿�,ֻ��"<<MAX_TIMES<<"�λ���Ŷ!" << endl;
	while (tries<MAX_TIMES)
	{
		tries++;
		cout << "guess" << tries << ":" << endl;
		cin >> guess;
		if (guess > rdm) {
			cout << "�´��ˣ�Сһ�����Կ���" << endl;
		}
		else if(guess < rdm) {
			cout << "��С�ˣ���һ�����Կ���" << endl;
		}
		else {
			cout << "�����ˣ���ϲ�㣡�յ�����Ϊ��" << rdm << endl;
			break;
		}
		
	}
	
	system("pause");
}