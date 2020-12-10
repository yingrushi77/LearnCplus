/*
 * 设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。
 */
//
// Created by yingrushi on 2020/12/10.
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//设计点类Point
class Point
{
private:
    int x;//坐标x
    int y;//坐标y

public:
    void setX(int a)
    {
        x = a;
    }

    void setY(int b)
    {
        y = b;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};

//设计圆类Circle
class Circle
{
private:
    int radius;//半径
    Point point;//圆心

public:
    void setR(int r)
    {
        radius = r;
    }

    void setP(int a,int b)
    {
        point.setX(a);
        point.setY(b);
    }

    int getR()
    {
        return radius;
    }

    Point getP()
    {
        return point;
    }
};

//判断点和圆之间的关系
void judgePointAndCircle(Point p,Circle c);


int main()
{
    //创建一个点对象
    Point point;
    point.setX(10);
    point.setY(10);

    //创建一个圆对象
    Circle circle;
    circle.setP(7,7);
    circle.setR(5);

    judgePointAndCircle(point,circle);

    return 0;

}

//判断点和圆之间的关系
void judgePointAndCircle(Point p,Circle c)
{
    //圆心与点之间的距离小于半径 圆内；圆心与点之间的距离等于半径 圆上；圆心与点之间的距离大于半径 圆外
    double d;//圆心与点之间的距离
    d = sqrt(pow((p.getX() - c.getP().getX()),2) + pow((p.getY() - c.getP().getY()),2));
    if (d < c.getR())
    {
        cout << "点在圆内" << endl;  //表示点在圆内
    }
    else if(d == c.getR())
    {
        cout << "点在圆上" << endl;  //表示点在圆上
    }
    else
    {
        cout << "点在圆外" << endl;  //表示点在圆外
    }
}



