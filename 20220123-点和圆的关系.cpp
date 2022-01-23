#include<iostream>
#include<cmath>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    //设置点位置
    void setPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }
    //获取点位置
    int getX() {
        return this->x;
    }
    int getY() {
        return this->y;
    }

};
class Circle {
private:
    Point Yuanxin;
    int  Banjing;//半径
public:
    //设置圆心
    void setYuanxin(Point p) {
        this->Yuanxin = p;
    }
    //设置半径
    void setBanjing(int r) {
        this->Banjing = r;
    }
    //获取圆心
    Point getYuanxin() {
        return this->Yuanxin;
    }
    //获取半径
    int getBanjing() {
        return this->Banjing;
    }
    //获取距离
    int getDistance(Point p) {
        float _X;
        float _Y;
        _X = this->Yuanxin.getX() - p.getX();
        _Y = this->Yuanxin.getY() - p.getY();
        return (int)sqrt(_X * _X + _Y * _Y);
    }

};
int main() {
    //定义一个点
    Point p;
    p.setPoint(5, 5);
    //定义圆
    Circle c;
    //定义圆心
    Point Yuanxin;
    Yuanxin.setPoint(0, 0);
    c.setYuanxin(Yuanxin);
    //定义半径
    c.setBanjing(10);
    cout << "点到圆心的距离为：" << c.getDistance(p) << endl;
    int Distance = 0;
    Distance = c.getDistance(p);
    if (Distance>c.getBanjing())
    {
        cout << "该点在圆外" << endl;
    }
    else if (Distance == c.getBanjing()) {
        cout << "该点在圆上" << endl;
    }
    else
    {
        cout << "该点在圆内" << endl;
    }
    system("pause");
}