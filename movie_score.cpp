#include<iostream>
using namespace std;
int main(){
    int score=0;
    cout<<"input the score of this movie (1~10):"<<endl;
    cin>>score;
    cout << "your score is :" << score << endl;
    if (score >= 9) {
        cout << "you marked this movie as Excellent!" << endl;
    }
    else if (score >= 7) {
        cout << "you marked this movie as Great!" << endl;
    }
    else if (score >= 6) {
        cout << "you marked this movie as Worth to see!" << endl;
    }
    else {
        cout << "you marked this movie as So bad movie!" << endl;
    }
    system("pause");
}