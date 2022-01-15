#include<iostream>
using namespace std;
//求出所有水仙花数，100到999
/*
定义：三位数，每一位的三次方，再求和，仍然仍然等于这个数字
解法：
1. 先解决如何把一个三位数的个位，十位，百位拆开。
2. 然后用while循环遍历100到999，找到所有符合要求的数字。
*/

int main() {
	int i = 100;
	int sum = 0;
	int h = 0, m = 0, l = 0; //定义百位，十位，个位
	do
	{
		h = i / 100; 
		m = (i % 100) / 10;
		l = i - 100 * h - 10 * m;
		/*
		三位数字的个十百位拆分的另外一种方法：
		gewei=i%10;
		shiwei=(i/10)%10; 先把百位降为十位，再求模
		baiwei=i/100;
		*/
		sum = pow(h, 3) + pow(m, 3) + pow(l, 3);
		if (sum == i) {
			cout << "number found:" << i << ":" << sum << endl;
		}
		i++;

	} while (i<1000);

	system("pause");
}