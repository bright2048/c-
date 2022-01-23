#include<iostream>
using namespace std;
class Cube {
private:
	int L;
	int W;
	int H;
public:
	//成员函数：判断是否相等
	bool isEqual(Cube c) {
		if (this->H == c.getH() && this->W == c.getW() && this->L == c.getL()) {
			return true;
		}
		else
		{
			return false;
		}
	}
	//成员函数：设置长
	void setL(int s) {
		if (s < 0 || s>100000) {
			cout << "wrong number, check again!!" << endl;
			return;
		}
		else {
			this->L = s;
		}
	}
	//成员函数：设置宽
	void setW(int s) {
		if (s < 0 || s>100000) {
			cout << "wrong number, check again!!" << endl;
			return;
		}
		else {
			this->W = s;
		}
	}
	//成员函数：设置高
	void setH(int s) {
		if (s < 0 || s>100000) {
			cout << "wrong number, check again!!" << endl;
			return;
		}
		else {
			this->H = s;
		}
	}
	//获取高
	int getH() {
		return H;
	}
	//获取宽
	int getW() {
		return W;
	}
	//获取长
	int getL() {
		return L;
	}
	//成员函数：求面积
	int getMianji() {
		return (L * W + W * H + H * L) * 2;

	}
	//成员函数：求体积
	int getTiji() {
		return L * W * H;
	}

};

bool isEqual(Cube c1, Cube c2) {
	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL()) {
		return true;
	}
	else
	{
		return false;
	}
}
int main() {
	Cube c;
	c.setL(10);
	c.setW(10);
	c.setH(10);
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	cout << "这个cube的体积为：" << c.getTiji() << endl;
	cout << "这个cube的面积为：" << c.getMianji() << endl;
	cout << "立方体c和c2是否相等：" << (c.isEqual(c2)?"true": "false") << endl;
	cout << "立方体c和c2是否相等：" << (isEqual(c,c2) ? "true" : "false") << endl;
	system("pause");
}