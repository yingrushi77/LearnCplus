/*
 * ���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
 */
//
// Created by yingrushi on 2020/12/10.
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//��Ƶ���Point
class Point
{
private:
    int x;//����x
    int y;//����y

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

//���Բ��Circle
class Circle
{
private:
    int radius;//�뾶
    Point point;//Բ��

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

//�жϵ��Բ֮��Ĺ�ϵ
void judgePointAndCircle(Point p,Circle c);


int main()
{
    //����һ�������
    Point point;
    point.setX(10);
    point.setY(10);

    //����һ��Բ����
    Circle circle;
    circle.setP(7,7);
    circle.setR(5);

    judgePointAndCircle(point,circle);

    return 0;

}

//�жϵ��Բ֮��Ĺ�ϵ
void judgePointAndCircle(Point p,Circle c)
{
    //Բ�����֮��ľ���С�ڰ뾶 Բ�ڣ�Բ�����֮��ľ�����ڰ뾶 Բ�ϣ�Բ�����֮��ľ�����ڰ뾶 Բ��
    double d;//Բ�����֮��ľ���
    d = sqrt(pow((p.getX() - c.getP().getX()),2) + pow((p.getY() - c.getP().getY()),2));
    if (d < c.getR())
    {
        cout << "����Բ��" << endl;  //��ʾ����Բ��
    }
    else if(d == c.getR())
    {
        cout << "����Բ��" << endl;  //��ʾ����Բ��
    }
    else
    {
        cout << "����Բ��" << endl;  //��ʾ����Բ��
    }
}



